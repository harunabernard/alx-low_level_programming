#include <stdio.h>

/**
 * main - prints lower case in reverse
 * Return: Alwayls 0
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
