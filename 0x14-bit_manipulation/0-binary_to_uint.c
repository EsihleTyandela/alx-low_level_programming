#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: Pointer to a string which contains the binary number
 * Return: Converted number or 0 if the string is NULL or if there is
 * a character different of 0 and 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin_num;
	int i;

	bin_num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		bin_num = 2 * bin_num + (b[i] - '0');
	}
	return (bin_num);
}
