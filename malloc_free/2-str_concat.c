#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatène deux chaînes de caracretè
 * @s1: Première chaîne de caractèr
 * @s2: Deuxième chaîne de caractèr
 *
 * Return: Un pointeur vers la nouvelle chaîne concatén
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);


	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < len2; j++)
		result[len1 + j] = s2[j];

	result[len1 + len2] = '\0';

	return (result);
}

