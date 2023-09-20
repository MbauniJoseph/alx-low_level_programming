#include <stdio.h>

/**
 * swap_int - Swaps values of 2ints
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
/* function thats swaps ints */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
