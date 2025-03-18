#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>


/**
* p_u - print and unsigned int
* @args: argument of a variadic list
* Return: Number of printed characters
*/

int p_u(va_list args)
{
	int i = 0, lenght = 0, u_lenght = 0;
	char s[11];
	long n = va_arg(args, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
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
	u_lenght++;
	}
	return (u_lenght);
}

/**
* p_octal - print a number in octal base
* @args: argument of a variadic list
* Return: Number of printed characters
*/

int p_octal(va_list args)
{
	int octal_lenght = 0, i = 0, lenght = 0, remain = 0;
	long octal = va_arg(args, unsigned int);
	char array[11];

	if (octal == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; octal % 10 != 0 || octal / 10 != 0; i++)
	{
		remain = octal % 8;
		array[i] = remain;
		octal = octal / 8;
	}

	array[i] = '\0';
	lenght = i - 1;

	for (i = lenght; i >= 0; i--)
	{
	_putchar((array[i] + 48));
	octal_lenght++;
	}

	return (octal_lenght);
}

/**
 * p_hexa - print a number in base 16 with lowercase letters convention
 * @args: argument of a varidic list
 * Return: Number of printed characters
 */

int p_hexa(va_list args)
{
	int hexa_lenght = 0, i = 0, lenght = 0, remain = 0;
	long hexa = va_arg(args, unsigned int);
	char array[11];

	if (hexa == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; hexa % 10 != 0 || hexa / 10 != 0; i++)
	{
		remain = hexa % 16;
		array[i] = remain;
		hexa = hexa / 16;
	}

	array[i] = '\0';
	lenght = i - 1;

	for (i = lenght; i >= 0; i--)
	{
		if (array[i] < 9)
		{
			_putchar((array[i] + 48));
		}
		else
		{
			_putchar((array[i] + 87));
		}
	hexa_lenght++;
	}

	return (hexa_lenght);
}

/**
 * p_hexa_up - print a number in base 16 with uppercase letters convention
 * @args: argument of a varidic list
 * Return: Number of printed characters
 */

int p_hexa_up(va_list args)
{
	int hexa_up_lenght = 0, i = 0, lenght = 0, remain = 0;
	long hexa_up = va_arg(args, unsigned int);
	char array[11];

	if (hexa_up == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; hexa_up % 10 != 0 || hexa_up / 10 != 0; i++)
	{
		remain = hexa_up % 16;
		array[i] = remain;
		hexa_up = hexa_up / 16;
	}

	array[i] = '\0';
	lenght = i - 1;

	for (i = lenght; i >= 0; i--)
	{
		if (array[i] < 9)
		{
			_putchar((array[i] + 48));
		}
		else
		{
			_putchar((array[i] + 55));
		}

	hexa_up_lenght++;
	}

	return (hexa_up_lenght);
}

