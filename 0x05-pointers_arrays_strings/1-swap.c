#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: pointer to an int
 * @b: pointer to other int
 * Return: integers
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
