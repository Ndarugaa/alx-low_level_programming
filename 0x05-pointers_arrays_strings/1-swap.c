#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers.
 * @a: first integer to be swapped
 * @b: second integer
 * Return: None
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
