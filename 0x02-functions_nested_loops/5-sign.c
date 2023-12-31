#include "main.h"

/**
 * print_sign - check the sign of a number
 * @n: the number to be checked
 * Return: 1 if it is greater than 0
 * 0 if it is 0 and -1 if it is negative number
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}

}
