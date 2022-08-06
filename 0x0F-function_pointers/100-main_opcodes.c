#include <stdlib.h>
#include <stdio.h>
/**
 * main - return theopcodes of the itself
 * @argc: number of CL args
 * @argv: pointer to array of CL args
 *
 * Return: int 0
 */
int main(int argc, char **argv)
{
	int bt, i;
	char *ops;

	bt = 0;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bt = atoi(argv[1]);
	if (bt < 0)
	{
		printf("Error\n");
		exit(2);
	}


	/*get pointer to main function*/
	ops = (char *) main;
	i = 0;
	while (i < bt)
	{
		printf("%02hhx", ops[i]);
		if (i < bt - 1)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
