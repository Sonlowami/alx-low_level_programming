#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/* more headers goes there */

/**
 * main - display the last digit of a number
 *
 * Return: integer 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int ld;

	ld = abs(n % 10);
	if (ld == 0)
		printf("Last digit of %d is %d and is %d\n", n, ld, 0);
	else if (ld < 6 && ld > 0)	
		printf("Last digit of %d is %d and is less than 6 but not 0\n", n, ld);
	else
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);	
	return (0);

}
