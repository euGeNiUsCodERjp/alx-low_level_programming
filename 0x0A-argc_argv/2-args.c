#include <stdio.h>

/**
 * main - A program that prints all arguments it receives
 * @argc: counts arguments
 * @argv: array that contains arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
