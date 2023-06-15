#include <stdio.h>

/** main -  prints the size of various types
 * on the computer it is compiled and run on
 * Return: Always 0.
 */

int main(void)

{

	char c;
	int i;
	long int li;
	long long int lli;
	float f;


	printf("Size of a char: %1d bytes \n",sizeof(c));
	printf("Size of an int: %1d bytes\n",sizeof(i));
	printf("Size of a long int: %1d bytes\n",sizeof(li));
	printf("Size of a long long int: %1d bytes\n" sizeof(lli));
	printf("Size of a float: %1d bytes\n",sizeof(f));
}
