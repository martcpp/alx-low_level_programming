#include "main.h"
/**
 * _isupper - a function that checks for uppercase characters
 * @c: a variable that stores letters
 * Return: Returns a value of 1 if the variable c contains an uppercase
 */
int _isupper(int c)
{
	int c = 'A';
	if (c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
