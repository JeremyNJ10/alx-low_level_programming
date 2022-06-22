#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase
 * followed by a new line, using only the putchar function and
 *
 * Return: 0
 */
int main(void)
{
	int digit;
	char letter;

	for (digit = 0; digit <= 9; digit++)
		putchar(digit + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
