#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _format(const char *format, va_list args);

/* Helper functions */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

int print_decimal(va_list args);
int print_int(va_list args);

#endif /* MAIN_H */
