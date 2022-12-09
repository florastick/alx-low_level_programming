#include <stdio.h>
/**
 * main - prints the size of various types on the computer in C program
 *
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	print f("Size of a char: %lu byte(s) \n", (unsigned long)sizeof(a));
	print f("Size of an int: %lu byte(s) \n", (unsigned long)sizeof(b));
	print f("Size of a long int: %lu byte(s) \n", (unsigned long)sizeof(c));
	print f("Size of a long long int: %lu byte(s) \n", (unsigned long)sizeof(d));
	print f("Size of a float: %lu byte(s) \n", (unsigned long)sizeof(f));
	return (0);
}
