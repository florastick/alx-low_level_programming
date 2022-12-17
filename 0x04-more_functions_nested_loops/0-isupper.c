#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 * @c: character to be checked
 *
 * Return; 1 if @c is 0
 * Otherwise, we return 0
*/

int _isupper(int c)
{
	int start = 65, end = 90;

	if (c >= start && c <= end)
		return (1);
	return (0);
}
