/**
 * _strspn - count number of bytes of a substring
 * that are in the first bytes of the superstring
 * @s: the super string
 * @accept: the substring
*
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*(s + i) == accept[j])
			{
				count++;
				break;
			}
		}
		if (*(s + i) != accept[j])
			break;
	}
	return (count);
}
