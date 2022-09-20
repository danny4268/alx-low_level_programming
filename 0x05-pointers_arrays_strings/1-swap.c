#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: first integer.
 * @b: second integer.
 */
void swap_init(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
