#include "main.h"

/**
 * print_last_digit - finds the last digit of a number
 * @n: the original number that is going to find its last digit
 * Return: Always last, the last digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');

	return (last);
}
