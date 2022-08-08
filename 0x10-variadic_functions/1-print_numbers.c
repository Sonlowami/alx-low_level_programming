#include <stdio.h>
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
	while (i < n)
	{
		printf("%u", va_arg(ints, unsigned int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(ints);
	printf("\n");
}
