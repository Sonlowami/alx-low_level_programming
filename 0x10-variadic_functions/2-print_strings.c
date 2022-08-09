#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings passed to a variadic f(x)
 * @separator: the separator of strings
 * @n: the number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *str;

	i = 0;
	va_start(strings, n);
	while (i < n)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(strings);
	printf("\n");
}
