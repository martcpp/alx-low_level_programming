#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 *
 *  Return: no return.
 */
void more_numbers(void)
{
	int c;
	int i;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i < 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			else
			{
				_putchar(i % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
