#include "main.h"

/*
 * _print_rev_recurssion - main - check the code
 * @s: character of a string
 * Return: Always o.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
