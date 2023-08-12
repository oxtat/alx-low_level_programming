/**
 * main - Entry point.
 *
 * Description: Prints if either a random number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	if (y > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, y);
	else if (y == 0)
		printf("Last digit of %d is %d and is 0", n, y);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, y);
	return (0);
}
