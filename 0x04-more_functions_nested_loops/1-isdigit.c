/**
 * _isdigit - checks wether a given number is a digit
 * @c: the integer to check
 *
 * Return: 1 if is digit
 *	0 if c is not a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
