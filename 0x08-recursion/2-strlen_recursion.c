#include "main.h"

/**
* _strlen_recursionn-get length of a str
* @s: str
* Return: length of str
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
