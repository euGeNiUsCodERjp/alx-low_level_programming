#include <stdio.h>

/**
 * main - A program that returns number of arguments
 * @argc: counts arguments
 * @argv: array that contains arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
