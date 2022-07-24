/**
 * _atoi - convert a string into a number
 * @s: the pointer to the string
 *
 * Return: integer result
 */
int _atoi(char *s)
{
	#define NEG 1
	#define POS 0
	int result, i, state;

	result = 0;
	state = POS;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-' && state == POS)
			state = NEG;

		else if (s[i] == '-' && state == NEG)
			state = POS;

		if (s[i] >= 48 && s[i] <= 57)
		{
			result = result * 10 + (s[i] - '0');
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (state == NEG)
		return (-result);
	return (result);
}

