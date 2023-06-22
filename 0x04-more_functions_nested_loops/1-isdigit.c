#include "main.h"

/**
 * _isdigit - checks if it is a digit or not.
 * @c: The number to be checked.
 * Return: Always 1 if it id digit or 0 if it is not.
 */

int _isdigit(int c)
{
	if (c >= '0' &&  c <= '9')
		return (1);
	else
		return (0);
}
