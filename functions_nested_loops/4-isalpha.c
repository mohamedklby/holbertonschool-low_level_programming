#include "main.h"

/**
 * _isalpha - Verifie si un caractere est une lettre de l'alpabet
 * @c: le caractere a verifier
 *
 * Return: 1 si c'est une lettre
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);

}
