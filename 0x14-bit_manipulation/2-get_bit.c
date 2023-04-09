#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: starting from 0 of the bit I wanna achieve
 * @n: the number for searching index bit
 * Return: the value of the bit at index index or -1 if an error happens
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	return ((n & mask) != 0);
}
