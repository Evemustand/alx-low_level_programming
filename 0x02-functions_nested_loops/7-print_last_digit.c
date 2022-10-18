#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @c: the number
 * Return: value of last digit
 */
int print_last_digit(int c)
{
	int x;

	if (c < 0)
		c = -c;
	x = c % 10;

	_putchar(x + '0');
	return (x);
}
