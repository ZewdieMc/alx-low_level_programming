#include "main.h"

/**
 * jack_bauer - prints every minute of the 24 hours
 *
 * Return: void
 */
void jack_bauer(void)
{

	int i, j;

	for (j = 0; j < 24; j++)
	{
		for (i = 0; i < 60; i++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(':');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar('\n');

		}
	}
}
