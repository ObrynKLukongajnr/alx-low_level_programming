#include "main.h"

/**
 * _strlen_recursion - return a length of string
 * @s: a string
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')

		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
