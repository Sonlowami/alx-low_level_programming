#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenate all arguments to
 * the program
 * @ac: count of arguments
 * @av: arrat of arguments
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	unsigned long int size, j;
	int i, k;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	/*give size to p*/
	size = 0;
	for (i = 0; i < ac; i++)
	{
		size += strlen(av[i]);
	}
	p = (char *) malloc(sizeof(char) * (size + ac + 1));

	if (p)
	{
		i = 0;
		for (k = 0 ; k < ac; k++)
		{
			for (j = 0; j < strlen(av[k]); j++)
			{
				p[i] = av[k][j];
				i++;
			}
			p[i] = '\n';
			i++;
		}
		return (p);
	}
	return (NULL);
}
