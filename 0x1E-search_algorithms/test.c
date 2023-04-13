#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Exclusive testing for the search algorithms
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[][16] = {
	    {0, 1, 5, 5, 5, 6, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15},
	    {3},
	    {-4, 5, 10},
	    {-9, -3}
    };

    printf("Binary search test 0 success or fail? ");
    (jump_search(array[0], 16, 5) == 2) ? printf("Success\n") : printf("fail\n");
    printf("Binary search test 0 success or fail? ");
    (jump_search(array[0], 16, -5) == -1) ? printf("Success\n") : printf("fail\n");

    printf("Binary search test 1 success or fail? ");
    (jump_search(array[1], 1, 8) == -1) ? printf("Success\n") : printf("fail\n");

    printf("Binary search test 1 success or fail? ");
    (jump_search(array[1], 1, 3) == 0) ? printf("Success\n") : printf("fail\n");

    printf("Binary search test 2 success or fail? ");
    (jump_search(array[2], 3, 5) == 1) ? printf("Success\n") : printf("fail\n");
    printf("Binary search test 2 success or fail? ");
    (jump_search(array[2], 3, 3) == -1) ? printf("Success\n") : printf("fail\n");
    printf("Binary search test 3 success or fail? ");
    (jump_search(array[3], 2, -20) == -1) ? printf("Success\n") : printf("fail\n");

    printf("Binary search test 3 success or fail? ");
    (jump_search(array[3], 2, -3) == 1) ? printf("Success\n") : printf("fail\n");
    return (EXIT_SUCCESS);
}
