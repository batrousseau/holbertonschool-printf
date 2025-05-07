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
 * get_const_string_lenght - compute the lenght of the string
 * @s: string you need to get lenght
 * Return: lenght of the string (without null bytes)
 */

 int get_const_string_lenght(const char *s)
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
 * get_lenght_before_percent - count the number of characters in a string
 * before the % char appears
 * @s: string to look at
 * Return: number of char before %
 */

int get_lenght_before_percent(const char *s)
{
	int i = 0, lenght_before_percent = 0;

	for (i = 0; *(s + i) != '%' && *(s + i) != '\0'; i++)
	{
	}
	lenght_before_percent = i;

	return (lenght_before_percent);
}

/**
* *_formatcpy - copy one const string to another
* @dest: what you have
* @src: what you wan't to copy
* Return: pointer to dest
*/

char *_formatcpy(char *dest, const char *src)
{

int j = 0;

for (j = 0; *(src + j) != '\0' ; j++)
{
*(dest + j) = *(src + j);
}

if (*(src + j) == '\0')
{
*(dest + j) = *(src + j);
}

return (dest);
}


/**
* *_strncpy2 - copy one string to another
* @dest: what you have
* @src: what you wan't to copy
* @n : an int
* Return: pointer to dest
*/

char *_strncpy2(char *dest, const char *src, int n)
{
int j = 0;

int src_lenght = get_const_string_lenght(src);


/* If I don't copy the entire src, I don't care about null character*/

if (src_lenght >= n)
{

	for (j = 0; j < n; j++)
	{
	*(dest + j) = *(src + j);
	}
}

/* If I must copy the entire src, then I must clear the memory of dest*/
else
{
	for (j = 0 ; *(src + j) != '\0'; j++)
	{
	*(dest + j) = *(src + j);
	}
	for (j = src_lenght ; j < n; j++)
	{
	*(dest + j) = '\0';
	}
}

return (dest);
}
