#include "stdio.h"
#include "main.h"

/**
 * main - print num of args passed to the program
 * @argc: num of args
 * @argv: array of args
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore all argv*/
	printf("%d\n", argc - 1);
	
	return (0);
}
