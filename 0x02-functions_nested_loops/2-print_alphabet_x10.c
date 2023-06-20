#include "main.h"

/**
 * The function  print_alphabet_x10() prints the alphabets
 * 10 times
 * Return: the function  print_alphabet_x10() returns nothing
 * main function returns 0 (Success).
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i<10)
	{
		for (c ='a'; c <= 'z'; c++)
		{
			_putchar(c);
			_putchar('\n');
			i++;
		}
	}
}
