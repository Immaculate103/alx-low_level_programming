#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to get printed
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int seen = 0;

	while (mask != 0)
	{
		if ((n & mask) == mask)
		{
			_putchar('1');
			seen = 1;
		}
		else if (seen)
		{
			_putchar('0');
		}
		mask >>= 1;

	}

	if (!seen)
		_putchar('0');
}
