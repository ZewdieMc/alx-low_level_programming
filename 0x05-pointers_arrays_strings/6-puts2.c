#include "main.h"

/**
 * puts2 - print every other character
 * @s: the string to print every character from
 * Return: void
 */
void puts2(char *s)
{
	int i = 0;

	while (s[i] != '\n')
	{
		if (i % 2 == 0)
		_putchar(s[i]);
	}
	_putchar('\n');
}
