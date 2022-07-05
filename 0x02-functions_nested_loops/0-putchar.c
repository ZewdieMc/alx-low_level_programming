#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[] = "_putchar";

	int i;

	for(i = 0; i < (int)(sizeof s / sizeof s[0]); i++)
	{
		_putchar(s[i]);	
	}
	_putchar('\n');
	return (0);
}
