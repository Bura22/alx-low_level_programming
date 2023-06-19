#include <stdio.h>

/* main - prints alphabets in lowercase
 * Return: Always 0 (Success)
 */

int main(void)

{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	return (0);
}
