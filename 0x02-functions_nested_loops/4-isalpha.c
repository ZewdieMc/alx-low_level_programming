#include "main.h"

/**
 * _isalpha - function to check if a char is letter, upper or lower
 *
 * @c: the character under test
 *Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

}
