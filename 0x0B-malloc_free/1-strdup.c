#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * _strdup - duplicate to a new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *rrr;
	int k, l = 0;

	if (str == NULL)
		return (NULL);

	k = 0;
	while (str[k] != '\0')
		k++;

	rrr = malloc(sizeof(char) * (k + 1));

	if (rrr == NULL)
		return (NULL);

	for (l = 0; str[l]; l++)
		rrr[l] = str[l];

	return (rrr);
}
