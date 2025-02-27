#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
* p_char - print a char
* @args: variadic argument to take
* Return: Nothing
*/

int p_char(va_list args)
{
	int char_length = 0;
	char c;

	c = va_arg(args, int);

	if (c > 0 && c < 127)
	{
		_putchar(c);
		char_length++;

	}

	return (char_length);
}

/**
 * p_string - print a string
 * @args: variadic argument to take
 * Return: Nothing
 */

int p_string(va_list args)
{

	int i = 0;
	int s_lenght;
	char *s = va_arg(args, char*);

	if (s == NULL)
	{
	s = "(null)";
	s_lenght = 5;
	}

	for (i = 0; *(s + i) != '\0'; i++)
	{
		_putchar(*(s + i));
		s_lenght++;
	}

	return (s_lenght);
}
