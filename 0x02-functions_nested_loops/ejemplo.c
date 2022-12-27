#include <unistd.h>
#include "main.h"
/*
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On erro, -1 is returned, and errno is set appropriatetely.
 */

int main(void)
{
	char word[9] = "Main";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
