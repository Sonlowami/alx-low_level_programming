
/**
 * recurse - find the root of n
 * @n: the number to find root for
 * @x: the assumption
 *
 * Return: x
 */
int recurse(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (recurse(n, x + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - make an assumption and find root
 * @n: the square of a number
 *
 * Return: int x
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (recurse(n, 2));
}
