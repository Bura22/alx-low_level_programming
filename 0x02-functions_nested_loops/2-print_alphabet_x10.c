#include "main.h"

/**
 * The function  print_alphabet_x10() prints the alphabets
 * 10 times
 * Return: the function  print_alphabet_x10() returns nothing
 * main function returns 0 (Success).
 */

void print_alphabet_x10(void)
{

for(int i=0; i<10; i++){

    for(char al='a'; al<='z'; al++){

        putchar(al);
        putchar('\n');
    }
}
