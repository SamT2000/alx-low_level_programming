#include <stdio.h>
/**
 * main - program that prints all single digit
 * numbers of base 10
 * You are not allowed to use any variable of
 * type char
 * You can only use the popular function
 * Return: 0
 */
int main(void)
{
	int d;

	for (d = '0' ; d <= '9' ; d++)
	putchar(d);
	putchar('\n');
	return (0);
}
