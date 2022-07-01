#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is a long description
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c == 'q' || c == 'e')
		continue;
	putchar(c);
	}
	putchar('\n');
	return (0);
}
