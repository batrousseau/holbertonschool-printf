#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
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
