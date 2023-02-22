#include "main.h"
/**
 * print_sign - program prints the sign of a number.
 * @i: is the integer being checked if positive or negative
 * Return: 1 if i is +ve, 0 if i = 0, -1 if i is -ve
 */

int print_sign(int i)
{
	if (i == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (i > 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (+1);
	}
}
