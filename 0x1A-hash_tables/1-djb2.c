#include "hash_tables.h"

/**
 * hash_djb2 - djb2 ALGORITHM
 *
 * @str: Data type
 *
 * Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int chr;
	unsigned long int hsh = 5281;

	while(chr = *str)
	{
		hsh = ((hsh << 5) + hsh) + chr;
	}
	return (hsh);
}
