#include "main.h"
/**
 * print_hex_upper - Prints a hexadecimal number in uppercase.
 * @n: The number to be printed.
 *
 * Return: The number of characters printed.
 */
int print_hex_upper(unsigned int n)
{
	char hex_digits[] = "0123456789ABCDEF";
	int count = 0;

	if (n / 16)
		count += print_hex_upper(n / 16);

	_putchar(hex_digits[n % 16]);
	count++;

	return (count);
}
