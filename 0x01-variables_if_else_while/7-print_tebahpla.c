#include <stdio.h>

/**
 * main - print alphbets from z
 * Return: Always 0
 */
int main(void)
{
	char lb;

	for (lb = 'z'; lb >= 'a'; lb--)
		putchar(lb);
	putchar('\n');
	return (0);
}
