#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int score;

	printf("What is your score:\n");

	scanf("%d", &score);

	if (score >= 80 && score <= 100)
	{
		printf("A\n");
	}
	else if (score >= 70 && score <= 79)
	{
		printf("B\n");
	}
	else if (score >= 65 && score <= 69)
	{
		printf("C\n");
	}
	else if (score >= 60 && score <= 64)
	{
		printf("D\n");
	}
	else if (score >= 50 && score <= 59)
	{
		printf("E\n");
	}
	else
	{
		printf("F\n");
	}
	return (0);
}
