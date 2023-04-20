#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all the inputs
 * @format: all types of arguments
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *separator = "";
	va_list arguments;

	va_start(arguments, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arguments, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arguments, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arguments, double));
					break;
				case 's':
					string = va_arg(arguments, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
						break;
				default:
					i++;
					continue;
			}
			separator = ",";
			i++;
		}
	}
	printf("\n");
	va_end(arguments);
}
