/**
 * swap_int - will assign the value of a to b
 * and the value of b to a in the calling function
 * @a: one variable of type int
 * @b: another variable of type int
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
