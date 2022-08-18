#include "lists.h"

void anterun(void) __attribute__((constructor));
/**
 * anterun - run before the main method
 */
void anterun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
