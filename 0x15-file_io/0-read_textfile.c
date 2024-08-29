#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
* read_textfile - Reads a text file and prints it to POSIX standard output.
* @filename: The name of the file to read.
* @letters: The number of letters to read and print.
*
* Return: The actual number of letters read and printed, or 0 if failure.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes_read, bytes_written;
char *buffer;

if (filename == NULL)
return (0);

/* Allocate buffer */
buffer = (char *)malloc(letters);
if (buffer == NULL)
return (0);

/* Open the file */
fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buffer);
return (0);
}

/* Read from the file */
bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
close(fd);
free(buffer);
return (0);
}

/* Write to standard output */
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
close(fd);
free(buffer);
return (0);
}

/* Clean up and close the file */
close(fd);
free(buffer);

return (bytes_written);
}
