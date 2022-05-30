#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b - param
 * Return - unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int base_len;
	int base_two;

	if (!b)
		return (0);

	for (base_len = 0; b[base_len] != '\0'; base_len++)
		;
	for (base_len--, base_two = 1; base_len >= 0; base_len--, base_two *= 2)
	{
		if (b[base_len] != '0' && b[base_len] != '1')
		{
			return (0);
		}

		if (b[base_len] & 1)
		{
			a += base_two;
		}
	}

	retun(a);
}
