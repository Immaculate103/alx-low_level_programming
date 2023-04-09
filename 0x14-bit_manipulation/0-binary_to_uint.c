#include "main.h"

/**
 * binary_to_uint - changes the binary number to an unsigned int
 * @b: it must point to a string of 0 and 1 chars
 * Description: changes a bin number to an int
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	int len = strlen(b);
	unsigned int result = 0;

	for (int i = 0; i < len; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result << 1;
			result |= (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
