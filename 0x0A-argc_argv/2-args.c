#include "main.h"
#include "stdio.h"

/**
 * main - prints all received args
 * @argc: num of args
 * @argv: array of args
 *
 * Return: always 0 (success)
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
