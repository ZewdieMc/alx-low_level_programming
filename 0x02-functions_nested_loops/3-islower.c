#include "main.h"

/**
 * islower - checks if a character is lower or  not
 *
 * return: 0 or 1
 */
int _islower(int c)
{
	 if (c <= 122 && c >= 97)
	 return (1);
	 else 
	 return (0);

}
