#include "main.h"

/**
 * print_number - recursive print a number
 * digit by digit
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n < 10)
	{
		_putchar('0' + n);
	}
	else
	{
		print_number(n / 10);
		_putchar('0' + (n % 10));
	}
}
