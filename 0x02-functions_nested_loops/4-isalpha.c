#include "main.h"

/**
 * _isalpha: check if the character is alphabet or not
 * @c: the number to be checked
 * Return: 1 if the character is alphabet
 * and 0 if it is not alphabet
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);

}
