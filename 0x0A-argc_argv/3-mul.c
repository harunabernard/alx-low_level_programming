#include "stdio.h"
#include "main.h"


/**
 * main - multiplication of two num
 * @argc: args count
 * @argv: args vector
 * 
 * Return: 0 true, 1 false
 */

int main(int argc, char *argv[])
{
	int k, l;

	if (argc == 3)
	{
		k = _atoi(argv[1]);
		l = _atoi(argv[2]);
		printf("%d\n", k * l);
		return (0);
	}
	printf("Error\n");
	return (1);
}

