#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main body
 * Return: All good
*/

int main(void)
{
	int myrand;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		myrand = (rand() % 127);
		printf("%c", myrand);
		total -= myrand;
	}
	printf("%c", total);

	return (0);
}
