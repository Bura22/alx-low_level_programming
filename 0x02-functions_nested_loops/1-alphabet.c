#include "main.h"

/**
 * Description: A function called print_alphabet()
 * prints alphabets in lowercase
 * Return: Always 0.
 */

void print_alphabet(void)
{

	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		_putchar('\n');

		al++;
	}
}
