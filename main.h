#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);

/* Helper functions */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_digit(va_list args);
/* int print_digit_recur(unsigned int num); */
int print_binary(va_list args);

#endif /* MAIN_H */
