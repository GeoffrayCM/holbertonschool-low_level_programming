#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the list_t list to linked
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}
	return (s);
}
