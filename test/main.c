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
	int check1 = 0, check2 = 0, i = 0;
	char buffer1[1025];
	char buffer2[1500];
	char buffer3[900];

		/* check for char and strings */
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
	
		/* Checks for int and double*/
	
		
		check1 = _printf("%d\n", -1024);
		check2 = printf("%d\n", -1024);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%d\n", 0);
		check2 = printf("%d\n", 0);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%d\n", INT_MAX);
		check2 = printf("%d\n", INT_MAX);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%d\n", INT_MIN);
		check2 = printf("%d\n", INT_MIN);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("There is %d bytes in %d KB\n", 1024, 1);
		check2 = printf("There is %d bytes in %d KB\n", 1024, 1);
		printf("My length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%d - %d = %d\n", 1024, 2048, -1024);
		check2 = printf("%d - %d = %d\n", 1024, 2048, -1024);
		printf("My length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
		check2 = printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
		printf("My length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%i\n", 1024);
		check2 = printf("%i\n", 1024);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%i\n", -1024);
		check2 = printf("%i\n", -1024);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%i\n", 0);
		check2 = printf("%i\n", 0);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%i\n", INT_MAX);
		check2 = printf("%i\n", INT_MAX);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%i\n", INT_MIN);
		check2 = printf("%i\n", INT_MIN);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("There is %i bytes in %i KB\n", 1024, 1);
		check2 = printf("There is %i bytes in %i KB\n", 1024, 1);
		printf("My length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%i - %i = %i\n", 1024, 2048, -1024);
		check2 = printf("%i - %i = %i\n", 1024, 2048, -1024);
		printf("My length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
		check2 = printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
		printf("My length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%d == %i\n", 1024, 1024);
		check2 = printf("%d == %i\n", 1024, 1024);
		printf("My length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("iddi%diddiiddi\n", 1024);
		check2 = printf("iddi%diddiiddi\n", 1024);
		printf("My length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%d\n", 10000);
		check2 = printf("%d\n", 10000);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%i\n", 10000);
		check2 = printf("%i\n", 10000);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		/* test for binary */
	
		check1 = _printf("%b\n", 5);
		check2 = printf("101\n");
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%b\n", 1024);
		check2 = printf("10000000000\n");
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%b\n", 0);
		check2 = printf("0\n");
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%b\n", 1);
		check2 = printf("1\n");
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%b\n", 255);
		check2 = printf("11111111\n");
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%b\n", UINT_MAX);
		check2 = printf("11111111111111111111111111111111\n");
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
	
		/* test for u*/
		check1 = _printf("%u\n", 1024);
		check2 = printf("%u\n", 1024);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%u\n", 0);
		check2 = printf("%u\n", 0);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%u\n", UINT_MAX);
		check2 = printf("%u\n", UINT_MAX);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%u\n", 4294967295);
		check2 = printf("%u\n", 4294967295);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		/* test for o*/
		check1 = _printf("%o\n", 1024);
		check2 = printf("%o\n", 1024);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%o\n", 0);
		check2 = printf("%o\n", 0);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%o\n", 7);
		check2 = printf("%o\n", 7);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%o\n", 8);
		check2 = printf("%o\n", 8);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%o\n", 255);
		check2 = printf("%o\n", 255);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%o\n", 512);
		check2 = printf("%o\n", 512);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%o\n", UINT_MAX);
		check2 = printf("%o\n", UINT_MAX);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%o\n", 4294967295);
		check2 = printf("%o\n", 4294967295);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		/* test for %x*/
		check1 = _printf("%x\n", 1024);
		check2 = printf("%x\n", 1024);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%x\n", 0);
		check2 = printf("%x\n", 0);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%x\n", 255);
		check2 = printf("%x\n", 255);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%x\n", 512);
		check2 = printf("%x\n", 512);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%x\n", 4096);
		check2 = printf("%x\n", 4096);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%x\n", UINT_MAX);
		check2 = printf("%x\n", UINT_MAX);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%x\n", 4294967295);
		check2 = printf("%x\n", 4294967295);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
		
	
		/* Test for %X*/
	
		check1 = _printf("%X\n", 1024);
		check2 = printf("%X\n", 1024);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%X\n", 0);
		check2 = printf("%X\n", 0);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%X\n", 255);
		check2 = printf("%X\n", 255);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%X\n", 512);
		check2 = printf("%X\n", 512);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%X\n", 4096);
		check2 = printf("%X\n", 4096);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%X\n", UINT_MAX);
		check2 = printf("%X\n", UINT_MAX);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("%X\n", 4294967295);
		check2 = printf("%X\n", 4294967295);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("Hexadecimal complex case: %X + %X = %X\n", 1024, 2048, 1024 + 2048);
		check2 = printf("Hexadecimal complex case: %X + %X = %X\n", 1024, 2048, 1024 + 2048);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	
		check1 = _printf("Hexadecimal max values: %X & %X\n", UINT_MAX, 65535);
		check2 = printf("Hexadecimal max values: %X & %X\n", UINT_MAX, 65535);
		printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
		
	
		 /*Buffer de moins de 1024 caractères*/
		 check1 = _printf("1234567890\n");
		 check2 = printf("1234567890\n");
		 printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	 
		 /*Buffer exactement à 1024 caractères*/
	
		 for (i = 0; i < 1023; i++)
			 buffer1[i] = 'A';
		 buffer1[1023] = '\n';
		 buffer1[1024] = '\0';
		 check1 = _printf("%s", buffer1);
		 check2 = printf("%s", buffer1);
		 printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	 
		 /* Buffer > 1024 caractères */
		 
		 for (i = 0; i < 1498; i++)
			 buffer2[i] = 'B';
		 buffer2[1498] = '\n';
		 buffer2[1499] = '\0';
		 check1 = _printf("%s", buffer2);
		 check2 = printf("%s", buffer2);
		 printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
	 
		 /*Plusieurs petits appels consécutifs (devrait bufferiser correctement)*/
		 
		 
		 for ( i = 0; i < 100; i++) {
			 check1 += _printf("X");
			 check2 += printf("X");
		 }
		 _printf("\n");
		 printf("\n");
		 printf("\nMy length is %d and expected length is %d\n\n", check1 + 1, check2 + 1);
	 
		 /*Alternance string long + petit char*/
		 
		 memset(buffer3, 'Z', 899);
		 buffer3[899] = '\0';
	 
		 check1 = _printf("%s!%c\n", buffer3, 'Q');
		 check2 = printf("%s!%c\n", buffer3, 'Q');
		 printf("\nMy length is %d and expected length is %d\n\n", check1, check2);
		 
	
	
		 /* Test simple avec '%' au milieu de la chaîne */
	check1 = get_lenght_before_percent("Hello% World");
	check2 = get_string_lenght("Hello% World");
	printf("Test 1: Length before '%%' = %d | Total length = %d\n", check1, check2);
	
	/* Test avec '%' au début de la chaîne */
	check1 = get_lenght_before_percent("%Start with percent");
	check2 = get_string_lenght("%Start with percent");
	printf("Test 2: Length before '%%' = %d | Total length = %d\n", check1, check2);
	
	/* Test avec '%' à la fin de la chaîne */
	check1 = get_lenght_before_percent("Ends with percent%");
	check2 = get_string_lenght("Ends with percent%");
	printf("Test 3: Length before '%%' = %d | Total length = %d\n", check1, check2);
	
	/* Test sans aucun '%' dans la chaîne */
	check1 = get_lenght_before_percent("No percent symbol here");
	check2 = get_string_lenght("No percent symbol here");
	printf("Test 4: Length before '%%' = %d | Total length = %d\n", check1, check2);
	
	/* Test avec chaîne vide */
	check1 = get_lenght_before_percent("");
	check2 = get_string_lenght("");
	printf("Test 5: Length before '%%' = %d | Total length = %d\n", check1, check2);
	
	/* Test avec plusieurs '%' dans la chaîne (seul le premier doit être considéré) */
	check1 = get_lenght_before_percent("Multiple % symbols % in string");
	check2 = get_string_lenght("Multiple % symbols % in string");
	printf("Test 6: Length before '%%' = %d | Total length = %d\n", check1, check2);


	return (0);
}

