#include "main.h"
#include <unistd.h>
/**
 * main- write c to stdout
 * return on success 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
