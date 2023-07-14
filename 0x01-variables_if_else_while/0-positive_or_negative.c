#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

void trim(char *s);

/**
 * main - Prints a random number and states whether
 *
 * Description: it is positive, negative, or zero.
 *
 * Return: Always 0.
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
