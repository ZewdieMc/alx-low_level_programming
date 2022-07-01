#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: This is a longer description
 *
 * Return: Always 0 (susccess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d %s\n", n, n < 0 ? "is negative" : n > 0 ? "is positive" :
			"is zero");
	return (0);
}
