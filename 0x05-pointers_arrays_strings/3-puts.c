#include "main.h"

/**
 * _puts - prints a string folowed by new line
 * @s: the string to be printed
 * Return: void
 */
void _puts(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
