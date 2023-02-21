#include "main.h"
#include <unistd.h>
/**
 * _putchar-writes the characterc to stdout
 * @c: the character to print
 *
 * return: on success 1
 * on error. -1 is returned, and err no is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

