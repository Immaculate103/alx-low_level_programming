#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: the number of timesa backslash should be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j + i - 1; j >= 0; j--)
			{
				_putchar(32);
			/*	_putchar(92);*/
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
