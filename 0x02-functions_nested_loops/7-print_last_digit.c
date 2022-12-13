#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * @n: takes integer type input
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
