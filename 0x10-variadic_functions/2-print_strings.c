#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Functions that prints strings, followed by a new line
* @separator: The string to be printed between strings
* @n: The number of strings passed to the function
* @...: A variable number of strings to be printed
*
* Returnn: If separator is NULL,not printed.
*    If one of the strings if NULL, (nil) is printed instead.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *pxr;
	unsigned int index;

	va_start(strings, n);
	for (index = 0; index < n; index++)
	{
		pxr = va_arg(strings, char *);
			if (pxr == NULL)
				printf("(nil)");
			else
				printf("%s", pxr);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
