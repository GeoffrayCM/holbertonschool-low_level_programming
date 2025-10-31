#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Destination buffer
 * @src: Source string
 * @n: Maximum number of bytes to copy
 *
 * Description: Works exactly like strncpy.
 * If src is less than n characters long,
 * the remainder of dest is filled with '\0' bytes.
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
