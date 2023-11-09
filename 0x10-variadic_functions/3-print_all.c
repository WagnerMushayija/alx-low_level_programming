#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - printing all over
 * @format: format needed
 * Return: 0 if needed
 */
void print_all(const char * const format, ...)
{
	va_list args;

	char *separator = "";

	unsigned int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				{
					char *str = va_arg(args, char *);

					if (str == NULL)
					{
						printf("%s(nil)", separator);
					}
					else
					{
						printf("%s%s", separator, str);
					}
					break;
				}
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
