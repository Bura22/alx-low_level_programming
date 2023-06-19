#include <stdio.h>

/* main - prints alphabets in lowercase
 * followed by new line
 * Return: Always 0 (Success)
 */

int main(void)

{
	char c = 'a';

        while (c <= 'z')
         {

        putchar(c);
	putchar('\n');
        c++;

         }

        return (0);

}
