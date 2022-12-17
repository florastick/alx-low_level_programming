#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, except 2 and 4.
 *
 * Return: Always 0
*/
void print_most_numbers(void)
{
	int start = 0, end = 9;

	while (start <= end)
	{
		if (start != 2 && != 4)
			_putchar(start + '0');
		start++;
	}
	_putchar('\n');
}
