#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry Point
 *
 * Description: prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 *
 */
void more_numbers(void)
{
	int idx = 14;
	int jdx;
	int i;

	for (jdx = 0; jdx < 10; jdx++)
	{

		for (i = 0; i <= idx; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar(10);
	}
}
