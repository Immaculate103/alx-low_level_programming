#include "main.h"

/**
 * set_bit - determines the bit value to 1 at a specific index
 * @index: begins at 0 to the result I wanna get
 * @n: pointer to the number to set the bit in
 * Return: 1 if it worked, or -1 if an error happened
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
