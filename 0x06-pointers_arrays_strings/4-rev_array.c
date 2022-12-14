#include "main.h"

/**
 * reverse_array - Reverse the elements in an array
 * @a: parameter
 * @n: parameter
 * Return: array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	n = n - 1;
	while (i < n)
	{
		temp = *(a + i);
		*(a + n) = *(a + n);
		*(a + n) = temp;
		i++;
		n--;
	}
}
