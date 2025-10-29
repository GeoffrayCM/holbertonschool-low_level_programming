#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Description: prints the numbers, from 0 to 9, followed by a new line
 *
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		if (c != 2 && c != 4)
			_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}
