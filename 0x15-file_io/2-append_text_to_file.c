#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
* append_text_to_file - Appends text to the end of a file.
* @filename: The name of the file to append to.
* @text_content: The content to append to the file.
*
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;
size_t length = 0;

/* Check if filename is NULL */
if (filename == NULL)
return (-1);

/* Open the file: append to it if it exists */
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

/* Check if text_content is NULL */
if (text_content != NULL)
{
/* Calculate the length of the text_content */
while (text_content[length] != '\0')
length++;

/* Write text_content to the file */
bytes_written = write(fd, text_content, length);
if (bytes_written == -1 || (size_t)bytes_written != length)
{
close(fd);
return (-1);
}
}

/* Close the file */
close(fd);

return (1);
}
