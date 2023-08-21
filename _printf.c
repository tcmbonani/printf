#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - printf function
 *
 * @format: formatted string
 * Return: The total number of outputted characters
 */
int _printf(const char *format, ...)
{
	int i, j, count, find;
	va_list list;
	set arguments[] = {
		{'c', print_char},
		{'d', print_d},
		{'i', print_d},
		{'s', print_str},
		{'R', print_rot13},
		{'r', print_rev},
	};

	if (format == NULL)
		return (-1);
