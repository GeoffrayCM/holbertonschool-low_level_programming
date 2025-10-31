#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array of integers
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;
	int temp;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
