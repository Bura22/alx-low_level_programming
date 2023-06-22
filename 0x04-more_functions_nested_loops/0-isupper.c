#include "main.h"

/**
 * _isupper - check if it is uppercase or not
 * @c: The character to be checked
 * Return: Always returns 1 if c is uppercase or 0 if it is lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
		return (1);
	else
		return (0);
}
