#include "stdio.h"
#include "main.h"

/**
 * main - prints name of a program
 * @argc: num of args
 * @argv: array of args
 *
 * Return: always 0 (success)
 */

int main(int argc__attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
