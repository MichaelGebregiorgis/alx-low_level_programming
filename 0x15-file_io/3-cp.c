#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *crt_buffer(char *file);
void file_close(int desc);

/**
 * file_close - close descriptor
 *
 * @desc: Data type
 */
void file_close(int desc)
{
	int cls;

	cls = close(desc);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", desc);
		exit(100);
	}
}

/**
 * crt_buffer - allocate for buffer
 *
 * @file: Data type
 *
 * Return: buffer
 */

char *crt_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * main - Copies content of a file to another file
 *
 * @argc: Data type
 *
 * @argv: Data type
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int rd, wrt, frm, to;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = crt_buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	rd = read(frm, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (rd == -1 || frm == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wrt = write(to, buffer, rd);
		if (to == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rd = read(frm, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buffer);
	file_close(frm);
	file_close(to);

	return (0);
}
