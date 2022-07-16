/**
 * leet - replace chars a,e,o,t,l by 4,3,0,7,1
 * ignoring case
 * @str: the string to operate on
 *
 * Return: pointer to the changed string
 */
char *leet(char *str)
{
	int i;

	for (i = 0; *(str+i); i++)
	{
		if (*(str + i) == 65 || *(str + i) == 97)
			*(str + i) = 52;
		else if (*(str + i) == 101 || *(str + i) == 69)
			*(str + i) = 51;
		else if (*(str + i) == 111 || *(str + i) == 79)
			*(str + i) = 50;
		else if (*(str + i) == 84 || *(str + i) == 116)
			*(str + i) = 55;

		else if (*(str + i) == 108 || *(str + i) == 76)
			*(str + i) = 52;
	}
	return (str);
}
