#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: takes an integer
 * @b: also takes an integer
 */
void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
