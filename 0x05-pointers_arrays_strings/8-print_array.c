#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: the array
 * @n: the number of elementts of to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		printf(", ");
		i++;
	}
	printf("%d\n", a[i]);
}
