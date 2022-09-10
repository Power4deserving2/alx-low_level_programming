#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* You have to include the stdio.h to run printf 
 * main wil print a random number and tate whether it is positive, negative or a zero
 */
/* betty style for the main function goes here*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() -RAND_MAX /2;

	if (n > 0)
		printf("%d is positive\n",n);
	else if (n < 0)
		printf("%d is negative\n",n);
	else
		printf("%d is zero\n",n);

	return(0);
}
