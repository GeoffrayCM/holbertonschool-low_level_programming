#include "function_pointers.h"

/**
 * print_name - print name
 * @name: The name to prints
 * @f: Pointer to function
 *
 * return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
