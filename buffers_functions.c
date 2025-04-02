#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * get_string_lenght - compute the lenght of the string
 * @s: string you need to get lenght
 * Return: lenght of the string (without null bytes)
 */

int get_string_lenght(char *s)
{
	int i = 0;
	int string_lenght = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}

	string_lenght = i;

	return (string_lenght);
}


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
			j = 0;
			count_write++;
		}

		if (*(s + i + 1) == '\0')
		{
		*(buffer + j + 1) = *(s + i + 1);
		write(1, buffer, j + 1);
		count_write++;
		}
	}
	free(buffer);
	return (count_write);
}
