#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - calculate numbers
 * @argc: the number of arguments
 * @argv: the pointer to an array of CL
 * arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int (*f)(int, int);

	if (argc != 4)
	{
		/*many or less arguments*/
		printf("Error\n");
		exit(98);
	}

	else if ((*(argv[2]) != '+' && *(argv[2]) != '-'
			&& *(argv[2]) != '*' && *(argv[2]) != '/'
			&& *(argv[2]) != '%') || argv[2][1] != '\0')
	{
		/*unsupported operation*/
		printf("Error\n");
		exit(99);
	}


	else if ((*(argv[2]) == '/' || *(argv[2]) == '%') &&
			*(argv[3]) == '0')
	{
		/*the user is trying to divide by 0*/
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
