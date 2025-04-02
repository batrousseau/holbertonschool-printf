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

	char *s = va_arg(args, char*);
	int s_lenght = get_string_lenght(s);


	if (s == NULL)
	{
		s = "(null)";
	}

	write_buffer(s);

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


/**
 * p_binary - print an unsigned int in binary
 * @arg: on of the argument of a variadic list
 * Return: number of printed characters
 */

int p_binary(va_list arg)
{
	int i = 0, lenght = 0;
	unsigned int binary = va_arg(arg, unsigned int);
	char array[33];
	int binary_lenght = 0;

	if (binary == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 1; binary / 10 != 0 || binary % 10 != 0; i++)
	{
		if (binary % 2 == 0)
		{
			array[i] = 48;
		}
		else
		{
			array[i] = 49;
		}
		binary = binary / 2;
	}
	array[i] = '\0';
	lenght = i - 1;

	for (i = lenght; i > 0; i--)
	{
	_putchar(array[i]);
	binary_lenght++;
	}

	return (binary_lenght);
}
