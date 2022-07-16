#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_string - prints string
 * @s: The string to print
 * Return: 1
 * get_precision - gets the precision from the format string
 * @p: the format string
 * @params: the parameters struct
 * @ap: the argument pointer
 */
int print_string(va_list s)
char *get_precision(char *p, params_t *params, va_list ap)
{
	char *my_string;
	int  i = 0;

	my_string = va_arg(s, char *);
	if (my_string == NULL)
		my_string = "(null)";
	while (my_string[i])
	if (*p != '.')
		return (p);
	p++;
	if (*p == '*')
	{
		_putchar(my_string[i]);
		i++;
		d = va_arg(ap, int);
		p++;
	}
	return (i);
	else
	{
		while (_isdigit(*p))
			d = d * 10 + (*p++ - '0');
	}

	params->precision = d;
	return (p);
}
