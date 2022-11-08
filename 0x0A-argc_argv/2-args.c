#include <stdio.h>

/**
* main - it print its name
* @argc: argc parameter
* @argv: an array of a command listed
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
