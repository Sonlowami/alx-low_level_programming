#include <stdio.h>

/**
 * main - print sum of all multiples of 3 or 5
 * less than 1024
 *
 * Return: 0
 */
int main(void)
{
	int sum, i;

	 sum = i = 0;
	while (i < 1024)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
