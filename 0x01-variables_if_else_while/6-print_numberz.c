#include <stdio.h>

/**
 * main - Prints single digit numbers of base 10 starting at zero
 * followed by a new line, using only the putchar function and
 * no char type variable
 *
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		putchar(digit + '0');
	putchar('\n');

	return (0);
}
