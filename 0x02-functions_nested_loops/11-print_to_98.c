#include "main.h"

/**
 * print_to_98 - prints a natural number from n to 98
 * @n: The number to be computed
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
			_putchar(i + '0');
	}

	for (i = 98; i >= n; i--)
		_putchar(i + '0');
}
