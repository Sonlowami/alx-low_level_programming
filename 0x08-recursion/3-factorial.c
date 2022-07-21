/**
 * factorial - computees the factorial of a number
 * @n: the number to compute factorial for
 *
 * Return: -1, 1, or >1 if n is < 0, 0, > 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

