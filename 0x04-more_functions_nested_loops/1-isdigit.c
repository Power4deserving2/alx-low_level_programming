#include "main.h"

/**
* _isdigit - checks whether a character is a digit or not
* @c: The character to be checked.
*
* Return: 1 if it is, 0otherwise
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
^ C
