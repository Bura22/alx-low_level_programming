#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*main - generates a random number and then finds
 * the last digit and finally checks wether it is
 * greater than or less than five
 *
 */

int main(void)

{

	int n;
	int lastDigit;

	srand(time(0));

	n = rand() - RAND_MAX/2;
	lastDigit = n%10;

	if (lastDigit > 5)
		printf("Last digit of %d is %d and is  greater than 5\n", n, lastDigit);
	else
		printf("Last digit of %d is %d and is  less than 5\n", n, lastDigit);


	return (0);
}
