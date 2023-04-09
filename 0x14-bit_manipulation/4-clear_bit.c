#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a specific index
 * @index: begins st 0 to the bit i wanna set
 * @n: the scale
 * Return: 1 if possible or -1 if negative
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = ~(1ul << index);
	*n &= mask;

	return (1);
}
