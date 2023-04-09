#include "main.h"

/**
 * binary_to_uint - converts a binary number to an int
 * @b: binary string
 * Return: decimal as unsigned int
 */

unsigned int binary_to_unt(const char *b)
{
	unsigned int ret;
	int p, q;

	ret = 0;
	p = 0;
	q = 0;
	if (b == NULL)
		return (0);
	while (b[p] != '\0')
		p++;
	p--;
	while (p >= 0)
	{
		if (b[p] == '0' || b[p] == '1')
		{
			ret += (b[p] - '0') << q;
			p--;
			q++;
		}
		else
			return (0);
	}
	return (ret);
}
