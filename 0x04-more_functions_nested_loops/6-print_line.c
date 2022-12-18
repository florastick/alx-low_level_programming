#include "main.h"

/**
 * print_line - Draws a straight line using a character _.
 * @n: The numbers of _ characters to be printed out
*/

void print_line(int n)
{
	int c;

	c = 0
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
