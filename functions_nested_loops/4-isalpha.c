#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Write a function that checks for alphabetic character,
 * @c: int
 * Return: Always 0 (Success)
 */
int _isalpha (int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
