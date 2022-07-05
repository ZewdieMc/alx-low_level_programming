#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[] = "_putchar";

	for(int i = 0; i < sizeof s / sizeof s[0]; i++)
	{
		_putchar(s[i]);	
	}
	_putchar('\n');
	return (0);
}
