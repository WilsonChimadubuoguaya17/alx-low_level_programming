#include "main.h"

/**
 * _isupper - uppercase letters to check
 * * @c: character to check for
 *
 * Return: 0 or 1
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
