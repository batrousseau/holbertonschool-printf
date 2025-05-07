#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
* write_buffer - print chars using a local buffer
* of 1024 chars
* @s: string you want to write
* Return: number of printed chars
*/

int write_buffer(char *s)
{
	int i = 0;
	int j = 0;
	char *buffer = malloc(1024 * sizeof(char));
	int count_write = 0;
	
	if (buffer == NULL)
	{
		exit(EXIT_FAILURE);
	}

	for (i = 0; *(s + i) != '\0'; i++, j++)
	{
		*(buffer + j) = *(s + i);

		if (i != 0 && i % 1023 == 0)
		{
			write(1, buffer, j);
			count_write = j + count_write;
			j = 0;
		}

		if (*(s + i + 1) == '\0')
		{
		*(buffer + j + 1) = *(s + i + 1);
		write(1, buffer, j + 1);
		count_write = j + 1 + count_write;
		}
	}
	free(buffer);
	return (count_write);
}



/**
 * print_format_with_buffer - using a local buffer to print
 * characters passed directy through the _printf function format
 * @s: format, or part of the format from _printf
 * Return: Number of printed characters
 */

int print_format_with_buffer(const char *s)
{

	int lenght_before_percent = 0;
	int result = 0;
	char *s1 = NULL;
	

	lenght_before_percent = get_lenght_before_percent(s);
	s1 = malloc((lenght_before_percent + 1) * sizeof(char));

	if (s1 == NULL)
	{
		exit (EXIT_FAILURE);
	}

	
	_strncpy2(s1, s, lenght_before_percent);
	*(s1 + lenght_before_percent) = '\0';

	result = write_buffer(s1);
	
	/*printf("The string I catch is %s", s1);*/
	free(s1);
	return (result);

}
