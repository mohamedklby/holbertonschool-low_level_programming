#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

char *message = "_putchar\n";

write(1, message, 9);

return (0);

}
