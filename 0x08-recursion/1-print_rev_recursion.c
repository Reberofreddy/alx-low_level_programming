#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: string to reverse
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_putchar(*s);
s++;
_print_rev_recursion(s);
s--;
}
