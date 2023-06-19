#include "main.h"

/**
 * _puts_recursion - function that prints a string, follwed by a new line
 * @s: The input and pointer to the string
 *
 *Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

