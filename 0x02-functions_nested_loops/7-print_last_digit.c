#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: is the int that will use for the argument of the function
 * Return:integer value
 */

int print_last_digit(int n)
{
	int last;

	last = n% 10;

	if (last < )
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
