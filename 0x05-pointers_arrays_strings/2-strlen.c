#include "main.h"
/**
 * _strlen - return the length of a string
 * Written by myself
 * @s: char to check
 * Description: this gives us a string lenghth
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
