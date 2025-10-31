#include "main.h"
#include <stdio.h>

/**
 * print_array - print array of integers, followed by a new line
 * @a: array
 * @n: size of array
 * Return: none
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");

}
