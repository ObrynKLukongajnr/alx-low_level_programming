#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase
 */

void print_alphabet(void)
{
	int count = 0;
	char l;
	
	while (count++ <= 9)
	{
	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
	}
}
