#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int score;

	printf("What is was your score \n");

	scanf("%d", &score);

	switch (score)
	{
		case 80 ... 100:
			printf("A \n");
			break;
		case 70 ... 79:
			printf("B \n");
			break;
		case 65 ... 69:
			printf("C \n");
			break;
		case 60 ... 64:
		       printf("D \n");
			break;
		case 50 ... 59:
			printf("E \n");
			break;
		case 0 ... 49:
			printf("F \n");
			break;
		default:
			printf("Invalid Score \n");
			break;
	}
	return (0);
}
