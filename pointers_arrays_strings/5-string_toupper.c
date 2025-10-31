#include "main.h"

/**
 * string_toupper - converts lowercase letters to uppercase
 * @str: string to convert
 *
 * Return: pointer to the resulting string
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p -= 32;
		}
		p++;
	}

	return (str);
}
