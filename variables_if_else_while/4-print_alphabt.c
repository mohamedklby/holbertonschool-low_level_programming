#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0)
 *
 **/

int main(void)

{
	char rav;

	for (rav = 'a'; rav <= 'z'; rav++)
	{
		if (rav != 'q' && != 'e')

			putchar (rav);
	}
	putchar('\n');

	return (0);
}
