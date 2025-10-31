#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	char *ptr = s;
	char sep[] = " \t\n,;.!?\"(){}";
	int i;

	if (*ptr >= 'a' && *ptr <= 'z')
		*ptr -= 32;

	while (*ptr)
	{
		for (i = 0; sep[i]; i++)
		{
			if (*ptr == sep[i] && (*(ptr + 1) >= 'a' && *(ptr + 1) <= 'z'))
			{
				*(ptr + 1) -= 32;
				break;
			}
		}
		ptr++;
	}

	return (s);
}
