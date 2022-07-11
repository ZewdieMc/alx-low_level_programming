#include "main.h"

/**
 * swap_int - swaps the values of two integer variables
 *
 * @a: pointer to the first integer
 * @b: pointer to the second intger
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *temp;

	temp = a;
	a = b;
	b = temp;
}
