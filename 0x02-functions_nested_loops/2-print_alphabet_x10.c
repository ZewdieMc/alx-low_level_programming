#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	char c;

	for (i = 0; i < 10; i++)
	{
		for (char c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
