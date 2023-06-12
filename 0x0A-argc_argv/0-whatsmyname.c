#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: A program that returns its name
 * @argc: counts arguments
 * @argv: array that contains arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
