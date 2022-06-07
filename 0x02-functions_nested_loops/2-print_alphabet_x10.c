#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *  
 *  Return: void
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	for(i = 0, i <= 10, i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
