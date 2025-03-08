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
	int i = 0, j = 0, p_lenght = 0, p_spec = 0, p_spec_temp = 0, spec_control = 0;
	va_list args;
	specif array[] = {
		{'c', p_char}, {'s', p_string}, {'%', p_percent}
	};
	if (format == NULL) /* What happens if there's no string to print */
	{
		exit(-1);
	}
	va_start(args, format);
	for (i = 0; *(format + i) != '\0'; i++)/* Lets roll through the s*/
	{
		if (*(format + i) != '%')
		{/* if this is a simple char and don't precede a %, I just print it */
			_putchar(*(format + i));
			p_lenght++;
		}
		else
		{
			for (j = 0; j < 3; j++)
			{
				if (*(format + i + 1) == array[j].x)
				{
					p_spec_temp = array[j].fp(args);
					p_spec = p_spec + p_spec_temp;
					i++;
					spec_control = 1;
					break;
				}
			}
			if (spec_control == 0)
			{
				_putchar('%');
				p_lenght++;
			}
		}
	}
	va_end(args);
	return (p_lenght + p_spec);
}
