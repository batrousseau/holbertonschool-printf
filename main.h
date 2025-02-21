#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
void p_char(va_list args);
void p_string(va_list args);

/**
 * struct spec - match specifier with function
 * @x: specifier
 * @fp: pointer to function that deals with specifier
 */

typedef struct spec {
char x;
void (*fp) (va_list arg);
} specif;



#endif