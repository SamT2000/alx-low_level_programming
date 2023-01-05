#include "main.h"
/**
 * _strlen - returns the lenght of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
