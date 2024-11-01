#include <stdio.h>

/**
 * cap_string - Met en majuscule
 * première letre de chaque mot dans une chaîne.
 * @str: Pointeur vers la chaîne à modifier.
 *
 * Return: Pointeur vers la chaîne modifiée.
 */

char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	char separators[] = " \t\n,;.!?\"(){}";

	int j;

	while (str[i])
	{

		if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		capitalize_next = 0;

		for (j = 0; separators[j]; j++)
		{
			if (str[i] == separators[j])
			{
				capitalize_next = 1;
				break;
			}
		}
		i++;
	}
	return (str);
}





