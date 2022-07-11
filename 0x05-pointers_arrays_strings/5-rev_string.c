#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	int j = i - 1;

	char c;

	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}

}
