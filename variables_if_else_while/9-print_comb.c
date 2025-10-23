#include <stdio.h>

/**
 * main - Prints all single digit numbers separated by ", "
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0'); /* afficher chiffre */

		if (i != 9) /* si pas dernier chiffre */
		{
			putchar(','); /* afficher virgule */
			putchar(' '); /* afficher espace */
		}
	}

	putchar('\n');

	return (0);
}

