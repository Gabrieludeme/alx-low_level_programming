#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_

/**
 * improvised functions
 * for the header file
 * variadic_functions
 */

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
