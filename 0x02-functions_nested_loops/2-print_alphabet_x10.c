#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *  
 *  Return: void
 */
void print_alphabet_x10(void)
{
	char letter = 'a';

	for(i = 0, 1 == 9, i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
