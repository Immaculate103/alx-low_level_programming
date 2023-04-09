#include <unistd.h>
#include "main.h"

/**_putchar - it either writes or printsxters
 * @chaeacter: printed xter
 * Return: 1, success, or -1 error
 */

int _putchar(char character)
{
	return (write(1, &character, 1));
}
