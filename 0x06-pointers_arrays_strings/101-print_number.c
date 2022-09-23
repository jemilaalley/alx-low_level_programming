#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: void
 */

void print_number(int n)
{
	unsigned int value = n;
	if (n < 0)
	{
		_putchar('-');
		value = -n;
	}

	if ((value / 10) > 0)
		print_number(value / 10);

	_putchar((value % 10) + '0');
}