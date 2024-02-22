#include <unistd.h>

/**
 * my_putchar
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
