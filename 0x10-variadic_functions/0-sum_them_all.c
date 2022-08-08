#include <stdarg.h>
/**
 * sum_them_all - make a sum of all arguments
 * @n: the first int to add
 *
 * Return: sum of all args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ints;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(ints, n);
	i = sum = 0;
	while (i < n)
	{
		sum += va_arg(ints, unsigned int);
		i++;
	}
	va_end(ints);
	return (sum);
}
