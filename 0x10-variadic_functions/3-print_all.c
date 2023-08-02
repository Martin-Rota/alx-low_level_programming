#include "variadic_functions.h"

/**
 * print_all - Print anything
 * @format: List of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	unsigned int i = 0, j = 0;
	arg_t args_list[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (args_list[j].specifier != '\0')
		{
			if (format[i] == args_list[j].specifier)
			{
				printf("%s", separator);
				args_list[j].func(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
