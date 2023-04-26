#ifndef MAIN_Hi
#define MAIN_H
#include<stdlib.h>
#include<stdarg.h>
#include<unistd.h>
#include <stdio.h>
#include<stdbool.h>
#include<limits.h>
#include<math.h>
int _printf(const char *format, ...);
int print_number(int n);
int _putchar(char c);
int print_char(char c);
int _print_string(char *str);
int _strlen(char *s);
int _printbinary( unsigned int value);
int print_unsigned(unsigned int num);
int print_octal(unsigned int n);
int print_hex_lower(unsigned int n);
int print_hex_upper(unsigned int n);
int handle_S_conversion(char *str);
int _print_hex(unsigned long int num);
int str_rev(char *s);
int _print_hex(unsigned long int num);
int _print_address(void *p);
int print_rot13(char *str);
#endif
