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
int print_unsigned_decimal(va_list args); /* for %u */
int print_octal(va_list args); /* %o */
int print_hex(va_list args); /* %x: lowercase */
int print_HEX(va_list args); /* %X: UPPERCASE */

#endif /* MAIN_H */
