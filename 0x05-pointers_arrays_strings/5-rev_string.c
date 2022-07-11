#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j;

	char c;

	while (s[i] != '\0')
	{
		i++;
	}
	j = 0;
	--i;
	while (j < i)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i--;
		j++;
	}

}
