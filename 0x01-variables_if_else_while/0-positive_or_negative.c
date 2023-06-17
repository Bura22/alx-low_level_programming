#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - assigns a variable n
 * and a random function generates
 * a random number. Then the it checks wether it is
 * negative or positive and it prints it's state
 * Return: Always 0 (Success)
 */ 

int main()
{

	int n;

        srand(time(0));
        n = rand() - RAND_MAX/2;

        if (n > 0)
        {
        printf("%d is positive\n", n);
        }

        else if (n == 0)
        {
        printf("%d is zero\n", n);
        }
        else
        {
        printf("%d is negative\n", n);
        }
        return (0);

}
