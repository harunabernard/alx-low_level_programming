#include "main.h"

/**
 * _strlen_recursion - retuns lenght of a string
 * @s: the string to be measured
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
