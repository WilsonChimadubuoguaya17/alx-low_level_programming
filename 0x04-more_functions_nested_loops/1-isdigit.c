#include "main.h"

/**
* _isdigit - this ais a function that check for digit (0 through 9).
* @c: char to check for digit
* Return:  0 or 1
**/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
