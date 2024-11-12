#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - cr√er une matrice de caract√re
 *
 * @size: taille de la matrice.
 * @c: premi√re variable
 *
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0) {
		return NULL;
	}

	char *array = (char *)malloc(size * sizeof(char));

		if (array == NULL) {
			return (NULL);
	}
		for (unsigned int i = 0; i < size; i++) {
		array[i] = c;
	}
	return (array);
}
