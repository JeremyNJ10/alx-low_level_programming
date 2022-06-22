#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assigns random number to variable n and
 * prints the last digit
 *
 * Return: 0
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d", n, lastDigit);
		printf(" and is greater than 5\n");
	}
	else if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d", n, lastDigit);
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
