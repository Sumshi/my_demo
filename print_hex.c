#include "main.h"
/**
 * print_hex_lower - Prints a hexadecimal number in lowercase.
 * @n: The number to be printed.
 *
 * Return: The number of characters printed.
 */
int print_hex_lower(unsigned int n)
{
	char hex_digits[] = "0123456789abcdef";
	int count = 0;

	if (n / 16)
		count += print_hex_lower(n / 16);

	_putchar(hex_digits[n % 16]);
	count++;

	return (count);
}
