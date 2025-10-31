#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to use from src
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;

	/* Avancer jusqu'à la fin de dest */
	while (*d != '\0')
		d++;

	/* Copier jusqu'à n caractères de src */
	while (n-- > 0 && *src != '\0')
		*d++ = *src++;

	/* Ajouter le '\0' final */
	*d = '\0';

	return (dest);
}
