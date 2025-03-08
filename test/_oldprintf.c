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
	int i = 0, j = 0, spec_control = 0, p_lenght = 0, p_spec = 0, p_spec_temp = 0;
	va_list args;
	specif array[] = {
		{'c', p_char},
		{'s', p_string}
	};
	if (format == NULL) /* What happens if there's no string to print */
	{
		exit(-1);
	}
	va_start(args, format);
	for (i = 0; *(format + i) != '\0'; i++)/* Lets roll through the s*/
	{
		if (*(format + i) != '%' && *(format + i - 1) != '%')
		{/* if this is a simple char and don't precede a %, I just print it */
			_putchar(*(format + i));
			p_lenght++;
		}
		if (*(format + i) == '%') /* if there's a %, I find the function*/
		{
			for (j = 0; j < 3; j++)
			{
				if (*(format + i + 1) == array[j].x)
				{
					p_spec_temp = array[j].fp(args);
					p_spec = p_spec + p_spec_temp;
					spec_control = 1;
				}
			}
			if (spec_control == 0) /* I  save I find a spec. If don't, print the %*/
			{
				if (*(format + i + 1) == '%')
				{
				}
				else
				{
				_putchar(*(format + i));
				p_lenght++;
				spec_control = 0;
				}
			}
		}
	}
	return (p_lenght + p_spec);
}


int main(void)
{
	int check1, check2;

	check1 = _printf("Let's print a simple sentence.\n");
	check2 = printf("Let's print a simple sentence.\n");
	printf("\nMy lenght is %d and expected lenght is %d\n\n", check1, check2);

	check1 =_printf("%c", 'S');
	check2 = printf("%c", 'S');
	printf("\nMy lenght is %d and expected lenght is %d\n\n", check1, check2);

	check1 =_printf("A char inside a sentence: %c. Did it work?\n", 'F');
	check2 = printf("A char inside a sentence: %c. Did it work?\n", 'F');
	printf("\nMy lenght is %d and expected lenght is %d\n\n", check1, check2);

	check1 = _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	check2 = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	printf("\nMy lenght is %d and expected lenght is %d\n\n", check1, check2);

	check1 =_printf("%s", "This sentence is retrieved from va_args!\n");
	check2 =printf("%s", "This sentence is retrieved from va_args!\n");
	printf("\nMy lenght is %d and expected lenght is %d\n\n", check1, check2);

	check1 = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	check2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	printf("\nMy lenght is %d and expected lenght is %d\n\n", check1, check2);

	check1 = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	check2 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	printf("\nMy lenght is %d and expected lenght is %d\n\n", check1, check2);

	check1 = _printf("%%");
	check2 = printf("%%");
	printf("\nMy lenght is %d and expected lenght is %d\n\n", check1, check2);

	check1 = _printf("Should print a single percent sign: %%\n");
	check2 = printf("Should print a single percent sign: %%\n");
	printf("\nMy lenght is %d and expected lenght is %d\n\n", check1, check2);

	check1 = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	check2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("\nMy lenght is %d and expected lenght is %d\n\n", check1, check2);

	check1 = _printf("%c", '\0');
	check2 = printf("%c", '\0');
	printf("\nMy lenght is %d and expected lenght is %d\n\n", check1, check2);

	check1 = _printf("%!\n");
	check2 = printf("%!\n");
	printf("\nMy lenght is %d and expected lenght is %d\n\n", check1, check2);

	check1 = _printf("%K\n");
	check2 = _printf("%K\n");
	printf("\nMy lenght is %d and expected lenght is %d\n\n", check1, check2);

	return (0);
}