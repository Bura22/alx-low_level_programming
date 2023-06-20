#include "main.h"

/**
 * _isalpha - check if the character is alphabet or not
 * @c: the character to be checked
 * Return: 1 if the character is alphabet or 0 if not alphabet
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);

}
