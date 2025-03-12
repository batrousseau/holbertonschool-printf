#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * p_percent - print a percent
 * @args: unused attribute
 * Return: lenght
 */

int p_percent(__attribute__((unused))va_list args)
{
	int percent_lengt = 0;

	_putchar('%');
	percent_lengt++;

	return (percent_lengt);
}
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
	int s_lenght = 0;
	char *s = va_arg(args, char*);

	if (s == NULL)
	{
	s = "(null)";

	}

	for (i = 0; *(s + i) != '\0'; i++)
	{
		_putchar(*(s + i));
		s_lenght++;
	}

	return (s_lenght);
}

/**
 * p_int - print an integer
 * @args: variadic args
 * Return: number of printed characters
 */

int p_int(va_list args)
{
	int i = 0, lenght = 0, int_lengt = 0;
	char s[11];
	long n = va_arg(args, int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		int_lengt++;
		n = -n;
	}
	for (i = 1; n / 10 != 0 || n % 10 != 0; i++)
	{
	s[i] = n % 10;
	n = n / 10;
	}
	s[i] = '\0';
	lenght = i - 1;

	for (i = lenght; i > 0; i--)
	{
	_putchar((s[i] + 48));
	int_lengt++;
	}
	return (int_lengt);
}


