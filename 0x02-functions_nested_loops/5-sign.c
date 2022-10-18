#include "main.h"

/**
 * print_sign - prints sign of a number
 *
 * @b: number to be checked
 * Return: 1 and prints +
 */
int print_sign(int b)
{
	if (b > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (b == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return ('-1');
	}
}
