#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int p_char(va_list args);
int p_string(va_list args);
int p_percent(va_list args);
int p_int(va_list args);
int p_double(va_list args);
int p_binary(va_list args);
int p_u(va_list args);
int p_octal(va_list args);
int p_hexa(va_list args);
int p_hexa_up(va_list args);
int get_string_lenght(char *s);
int write_buffer(char *s);

/**
 * struct spec - match specifier with function
 * @x: specifier
 * @fp: pointer to function that deals with specifier
 */

typedef struct spec
{
char x;
int (*fp)(va_list arg);
} specif;



#endif
