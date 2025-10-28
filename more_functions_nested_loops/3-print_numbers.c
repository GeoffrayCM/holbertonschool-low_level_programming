#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: prints the numbers, from 0 to 9, followed by a new line
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}
