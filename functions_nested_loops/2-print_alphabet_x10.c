#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in loowercase,
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char c;
	int d = 0;

		while (d <= 9)
		{
			c = 'a';
			while (c <= 'z')
			{
				_putchar(c);
				c++;
			}
			d++;
			_putchar('\n');
		}
}



