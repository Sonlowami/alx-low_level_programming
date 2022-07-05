#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/* more headers goes there */



/**
 * main - prints whether the program is positive or negative.
 *
 * Return: integer 0
 */

int main(void)

{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	if (n > 0)

		printf("%d is positive\n", n);

	else if (n == 0)

		printf("%d is zero", 0);

	else
		printf("%d is negative\n", n);

	return (0);

}
