#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 * Return: void
 */
void print_diagonal(int n)
{
	int c;
	int i;

	for (n = 0; n > ; n--)
	{
		for (c = 0; c > 0; c++)
		{
			if (i > 0)
			{
				_putchar(32);
				i--;
			}
			else
			{
				_putchar(92);
			}
			_putchar(10);
		}
	}
	if (c < 1)
	{
		_putchar(10);
	}
}
