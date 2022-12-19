#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: inputs
 * Return; print
 */

void puts(char *str)
{
	int i = 0;

	for (; str[i] != '\n'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_pustchar('\n');
}
