#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Prints an error message to stderr and exits
 * @code: Exit code
 * @msg: Message format
 * @file: File name or argument to include in the message
 */
void print_error_and_exit(int code, const char *msg, const char *file)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(code);
}

/**
 * close_fd - Closes a file descriptor and exits on failure
 * @fd: File descriptor to close
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - Copies the content of one file to another
 * @file_from: Source file
 * @file_to: Destination file
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t r, w;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_fd(fd_from);
		print_error_and_exit(99, "Error: Can't write to %s\n", file_to);
	}

	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
		{
			close_fd(fd_from);
			close_fd(fd_to);
			print_error_and_exit(99, "Error: Can't write to %s\n", file_to);
		}
	}

	if (r == -1)
	{
		close_fd(fd_from);
		close_fd(fd_to);
		print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);
	}

	close_fd(fd_from);
	close_fd(fd_to);
}

/**
 * main - Entry point for the cp program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		print_error_and_exit(97, "Usage: cp %s %s\n", "file_from file_to");

	copy_file(argv[1], argv[2]);

	return (0);
}




