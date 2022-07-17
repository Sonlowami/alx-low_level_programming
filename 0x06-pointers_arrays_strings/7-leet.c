/**
 * leet - replace chars a,e,o,t,l by 4,3,0,7,1
 * ignoring case
 * @str: the string to operate on
 *
 * Return: pointer to the changed string
 */
char *leet(char *str)
{
	int i, j;

	char o_code[10] = {'a', 'A', 'e', 'E', 'O', 'o', 'L', 'l', 't', 'T'};
	char leet_code[10] = {'4', '4', '3', '3', '0', '0', '1', '1', '7', '7'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == o_code[j])
				str[i] = leet_code[j];
		}
	}
	return (str);
}
