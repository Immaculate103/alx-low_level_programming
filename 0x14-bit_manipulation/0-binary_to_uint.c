#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - changes the binary number to an unsigned int
 * @b: it must point to a string of 0 and 1 chars
 * Description: changes a bin number to an int
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len, i;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result << 1;
		if (b[i] == '1')
			result += 1;
	}

	return (result);
}
