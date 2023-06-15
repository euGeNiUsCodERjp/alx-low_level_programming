#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: a program that multiplies two numbers
 * @argc: counts arguments
 * @argv: Array tha contains arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x1, x2, sum;

	if (argc == 3)
	{
		x1 = atoi(argv[1]);
		x2 = atoi(argv[2]);
		sum = x1 * x2;
		printf("%d\n", sum);
		return (0);
	}
	else

	{
		printf("Error\n");
		return (1);
	}
}
