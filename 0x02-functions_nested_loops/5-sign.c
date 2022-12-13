#include "main.h"
/**
 * print_sign - prints + if n>0, - if n<0, 0 if 0
 *
 * @n: takes integer input
 *
 * Return: 1 if +ve, -1 if -ve and 0 if n=0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
