#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number under test
 *
 * Return: always 0
 */
int print_last_digit(int n)
{
	int a;

	a = n % n;
	_putchar('0'+a);
	return (a);
}
