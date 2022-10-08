/**
 * rand - override the rand function
 *
 * Return: a random number
 */
int rand(void)
{
	static int n = -1;
	int val[] = {9, 8, 10, 24, 75, 9};
	
	n++;
	if (n >= 6)
		n = 0;
	return val[n];
}
