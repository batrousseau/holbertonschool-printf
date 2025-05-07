#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

/**
 * check_null_format - check if format is NULL
 * @s: format to check
 * Return: Nothing, and shame
 */
void check_null_format(const char *s)
{
if (s == NULL) /* What happens if there's no string to print */
{
	exit(-1);
}
}