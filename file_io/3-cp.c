#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Prints an error message to stderr and exits
 * @exit_code: The exit code to use
 * @message: The error message format string
 * @arg: The argument to print in the message
 */
void print_error_and_exit(int exit_code, const char *message, const char *arg)
{
    dprintf(STDERR_FILENO, message, arg);
    exit(exit_code);
}

/**
 * main - Copies the content of a file to another file
 * @argc: Argument count
 * @argv: Argument vector
 * 
 * Return: 0 on success, exits with code otherwise
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

if (argc != 3)
print_error_and_exit(97, "Usage: cp file_from file_to\n", "");

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
close(fd_from);
print_error_and_exit(99, "Error: Can't write to %s\n", argv[2]);
}


while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
close(fd_from);
close(fd_to);
print_error_and_exit(99, "Error: Can't write to %s\n", argv[2]);
}
}

if (bytes_read == -1)
{
close(fd_from);
close(fd_to);
print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
}

if (close(fd_from) == -1)
print_error_and_exit(100, "Error: Can't close fd %d\n", argv[1]);

if (close(fd_to) == -1)
print_error_and_exit(100, "Error: Can't close fd %d\n", argv[2]);

return (0);
}
