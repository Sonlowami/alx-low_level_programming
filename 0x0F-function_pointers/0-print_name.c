#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - this function prints a name
 * @name: string name to print
 * @f: the pointer to a function that does the
 * actual printing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
