#include " main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to be printed in reverse order
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\n')
	{
		i++;
	}
	while (i > 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
