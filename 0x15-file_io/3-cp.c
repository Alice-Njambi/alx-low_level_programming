#include "main.h"

/**
* print_error - Prints an error message and exits with a code.
* @message: The error message to print.
* @value: Additional value for the message (e.g., file descriptor or filename).
* @exit_code: The exit code for the program.
*/
void print_error(const char *message, int value, int exit_code)
{
dprintf(STDERR_FILENO, message, value);
exit(exit_code);
}

/**
* main - Copies the content of one file to another.
* @argc: Number of arguments.
* @argv: Array of arguments.
*
* Return: Always 0 on success.
*/
int main(int argc, char **argv)
{
int fd_from, fd_to;
ssize_t r, w;
char buffer[1024];

/* Check the number of arguments */
if (argc != 3)
print_error("Usage: cp file_from file_to\n", 0, 97);

/* Open the source file for reading */
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
print_error("Error: Can't read from file %s\n", argv[1], 98);

/* Open the destination file for writing */
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
if (fd_to == -1)
print_error("Error: Can't write to file %s\n", argv[2], 99);

/* Read from the source file and write to the destination file */
while ((r = read(fd_from, buffer, sizeof(buffer))) > 0)
{
w = write(fd_to, buffer, r);
if (w != r)
print_error("Error: Can't write to file %s\n", argv[2], 99);
}

if (r == -1)
print_error("Error: Can't read from file %s\n", argv[1], 98);

/* Close the file descriptors */
if (close(fd_from) == -1)
print_error("Error: Can't close fd %d\n", fd_from, 100);

if (close(fd_to) == -1)
print_error("Error: Can't close fd %d\n", fd_to, 100);

return (0);
}
