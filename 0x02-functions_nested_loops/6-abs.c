#include "main.h"

/**
 * _abs - computes the abolute value of an integer
 * @n: he number to be computed 
 * Return: Always n the computed number
 */

int _abs(int n)
{
        if (n < 0)
        {
                int abs = n * -1;
                return (abs);
        }
	return (n);

}
