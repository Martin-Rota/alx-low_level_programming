#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: List of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0;
	char c;
	int flag = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (flag)
			printf(", ");

		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				flag = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				flag = 1;
				break;
		}

		i++;
	}

	printf("\n");
	va_end(args);
}
