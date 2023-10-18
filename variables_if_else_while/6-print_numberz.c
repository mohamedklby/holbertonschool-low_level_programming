#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0.
 *
 * Return: always 0
 */

int main(void)
{
	int henry;

	for (henry = 0; henry < 10; henry++)
	       putchar((henry % 10) + '0');

	putchar('\n');

	return (0);
}
