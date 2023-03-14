#include "main.h"
#include "stdlib.h"

/**
 * create_array - create array of size
 * @size: size of array
 * @c: char
 * Description: create an array of size and assign a character char
 * Return: pointer to array, NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int k;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		str[k] = c;
	return (str);
}
