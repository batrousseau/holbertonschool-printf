#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>


/**
 * _printf - should print all kind of stuffs
 * @format: parameters to take into account
 * Return: the number of printed characters
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	int spec_control = 0;
	va_list args;
	specif array[] = {
		{'c', p_char},
		{'s', p_string}
	};
	va_start(args, format);

	if (format == NULL) /* What happens if there's no string to print */
	{
		return (-1);
	}

	for (i = 0; *(format + i) != '\0'; i++)/* Lets roll through the s*/
	{
		if (*(format + i) != '%' && *(format + i - 1) != '%')
		{/* if this is a simple char and don't precede a %, I just print it */
			_putchar(*(format + i));
		}
		if (*(format + i) == '%') /* if there's a %, I find the function*/
		{
			for (j = 0; j < 3; j++)
			{
				if (*(format + i + 1) == array[j].x)
				{
					array[j].fp(args);
					spec_control = 1;
				}
			}
			if (spec_control == 0) /* I  save I find a spec. If don't, print the %*/
			{
				_putchar('%');
				spec_control = 0;
			}
		}
	}
	_putchar(10);
	return (0);
}