/*
 * Auth: Immanuel Peter
 * Project: 3_factorial.c
 */
include "main.h"
/*
 * factorial - Returns the factorial of a number.
 * @n - This is the number to be factorised.
 *
 * return; if n < 0 it returns -1 to show it failed
 * 	   if n > 0 it finds the factorial
 */
int factorial(int n);
{
	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	else
		return (n *= factorial(n-1))

}
