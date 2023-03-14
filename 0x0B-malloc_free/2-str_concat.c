#include "main.h"
#include "stdlib.h"

/**
 * str_concat - gets the end of inputs and add them together for size
 * @s1: input
 * @s2: input
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int k, kl;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	k = kl = 0;

	while (s1[k] != '\0')
		k++;

	while (s2[kl] != '\0')
		kl++;

	concat = malloc(sizeof(char) * (k + kl + 1));

	if (concat == NULL)
		return (NULL);

	k = kl = 0;

	while (s1[k] != '\0')
	{
		concat[k] = s1[k];
		k++;
	}
	concat[k] = '\0';

	return (concat);
}
