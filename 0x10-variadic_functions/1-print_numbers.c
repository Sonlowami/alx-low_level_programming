#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - print it's int args with a separator
 * @separator: the separator string
 * @n: the number of variable args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ints;

	va_start(ints, n);
	i = 0;

	if (n == 0)
		exit(0);
	while (i < n)
	{
		printf("%d", va_arg(ints, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(ints);
	printf("\n");
}
