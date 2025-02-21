#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
* p_char - print a char
* @args: variadic argument to take
* Return: Nothing
*/

void p_char(va_list args)
{
	char c;

	c = va_arg(args, int);

	if (c > 0 && c < 127)
	{
		_putchar(c);
	}
	else
	{
		c = ' ';
		_putchar(c);
	}

}

/**
 * p_string - print a string
 * @args: variadic argument to take
 * Return: Nothing
 */

void p_string(va_list args)
{

	int i = 0;
	char *s = va_arg(args, char*);

	if (s == NULL)
	{
	s = "(nil)";
	}

	for (i = 0; *(s + i) != '\0'; i++)
	{
		_putchar(*(s + i));
	}
}
