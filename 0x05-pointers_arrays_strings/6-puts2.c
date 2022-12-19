#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: inputs
 * Return; print
 */

void puts(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++

			len -= 1;

	for (; i <= len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
