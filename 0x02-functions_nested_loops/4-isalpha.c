#include "main.h"
/**
 *_isalpha - Check Main
 *@c: An input character
 *
 *Return: 1 if char is letter lower or upper, 0 otherwise.
 */

int _isalpha(int c)
{
char lower, upper;
int isletter = 0;

for (lower = 'a'; lower <= 'z'; lower++)
{
for (upper = 'A'; upper <= 'Z'; upper++)
{
if (c == lower || c == upper)
isletter = 1;
}
}
return (isletter);
}
