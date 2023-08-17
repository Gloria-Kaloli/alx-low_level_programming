#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - Function that prints anything
* @format: list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	int f = 0;
	char *pxr, *psp = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[f])
		{
			switch (format[f])
			{
				case 'c':
					printf("%s%c", psp, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", psp, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", psp, va_arg(list, double));
					break;
				case 's':
					pxr = va_arg(list, char *);
					if (!pxr)
						pxr = "(nil)";
					printf("%s%s", psp, pxr);
					break;
				default:
					f++;
					continue;
			}
			psp = ", ";
			f++;
		}
	}
	printf("\n");
	va_end(list);
}
