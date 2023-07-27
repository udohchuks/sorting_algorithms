#include "sort.h"

/**
 * swap - swaps number
 * @a: number a
 * @b: number b
 *
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
