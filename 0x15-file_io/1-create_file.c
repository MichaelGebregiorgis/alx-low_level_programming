#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: Data type
 *
 * @text_content: Data type
 *
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int opn, wrt, inc = 0;

	if (!filename)
	{
		return (-1);
	}
	if (!text_content)
	{
		for (inc = 0, text_content[inc];)
		{
			inc++;
		}
	}
	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(opn, text_content, inc);

	if (wrt == -1 || opn == -1)
	{
		return (-1);
	}
	close(opn);
	return (1);
}
