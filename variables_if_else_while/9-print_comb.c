#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
		putchar('0'+ i);
	if (i < 9)
		putchar(',');
	putchar('i');

	putchar('\n');
	return (0);
}

