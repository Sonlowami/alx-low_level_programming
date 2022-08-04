#include "function_pointers.h"

/**
 * print_name - this function prints a name
 * @name: string name to print
 * @f: the pointer to a function that does the
 * actual printing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
