#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

/**
 * _printf - should print all kind of stuffs
 * @format: parameters to take into account
 * Return: the number of printed characters
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, p_lght = 0, p_spec = 0, p_tmp = 0, c = 0, p = 0, spec_c = 0;
	va_list args;
	specif array[] = {
	{'c', p_char}, {'s', p_string}, {'%', p_percent}, {'d', p_int}, {'x', p_hexa}
	, {'i', p_int}, {'b', p_binary}, {'u', p_u}, {'o', p_octal}, {'X', p_hexa_up}
	};

	check_null_format(format);
	va_start(args, format);
	for (i = 0; *(format + i) != '\0'; i++)/* Lets roll through the s*/
	{
		if (*(format + i) != '%')
		{/* if this is a simple char and don't precede a %, I just print it */
			c = i;
			i += print_format_with_buffer((format + i)) - 1;
			p = i - c + 1;
			p_lght += p;
		}
		else
		{
			for (j = 0; j < 10; j++)
			{
				if (*(format + i + 1) == array[j].x)
				{
					p_tmp = array[j].fp(args);
					p_spec = p_spec + p_tmp;
					i++;
					spec_c = 1;
					break;
				}
			}
			if (spec_c == 0)
			{
				_putchar('%');
				p_lght++;
			}
		}
	}
	va_end(args);
	return (p_lght + p_spec);
}

