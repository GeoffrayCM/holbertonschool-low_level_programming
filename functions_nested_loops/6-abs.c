#include "main.h"

/**
 * _abs - donne la valeur absolue d'un nombre
 * @n: le nombre vérifier
 * Return: la valeur absolue de n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
