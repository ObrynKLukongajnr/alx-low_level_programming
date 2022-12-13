#include <stdio.h>
/**
 * main - print _putchar on new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char p[] = "_putchar";
	for (i = 0; i < 9; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
