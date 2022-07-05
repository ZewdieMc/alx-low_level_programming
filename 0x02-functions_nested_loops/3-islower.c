#include "main.h"

/**
 *_islower - checks if a character is lower or  not
 *@c: character under check
 *
 * Return: 0 or 1
 */
int _islower(int c)
{

	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);

}
