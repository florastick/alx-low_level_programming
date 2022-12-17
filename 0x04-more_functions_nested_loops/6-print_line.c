#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: line length
 *
 * Return: Always 0
*/

void print_line(int n)
{
	int count 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (count < n)
		{
			_putchar('_');
			count++;
		}
		_putchar('\n');
	}
}
