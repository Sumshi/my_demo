#include "main.h"

/**
 * str_rev - function that prints string in reverse
 * @s: arguments
 * Return: the string
 */
int str_rev(char *s)
{
	int i;
	int length = 0;

	if (s == NULL)
		s = "(null)";

	while (s[length] != '\0')
		length++;
	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	return (length);
}
