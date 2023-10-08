#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("n is : %i\n", n);

	if (n < 0)
	{
		printf("%i is negative number\n", n);
	}
	else if (n > 0)
	{
		printf("%i is positive number\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}

	return (0);
}
