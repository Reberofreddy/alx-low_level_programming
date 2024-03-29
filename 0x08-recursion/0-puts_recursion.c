#include "main.h"

/**
 * _putchar_recursion - prints a string, followed by a new line.
 * @s: string to print
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
