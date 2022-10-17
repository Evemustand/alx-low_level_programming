#include <stdio.h>
/**
 * main - size of array
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %zu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %zu byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %zu byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %zu byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of float: %zu byte(S)\n", (unsigned long)sizeof(e));
	return (0);
}
