#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @s: the string
 */
void puts_half(char *s)
{
	int i = 0, n, j;

	while (s[i] != '\0')
		i++;

	n = (i - 1) / 2;
	for (j = n + 1; j < i; j++)
		_putchar(s[j]);
	_putchar('\n');
}
