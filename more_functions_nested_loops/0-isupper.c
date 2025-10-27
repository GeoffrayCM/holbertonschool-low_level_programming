#include "main.h"
#include <stdio.h>

/**
 * _isupper - Write a function that checks for uppercase character
 * @c: caractère checks for uppercase character
 *
 * Return: 1 si c est une majuscule, 0 sinon
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

