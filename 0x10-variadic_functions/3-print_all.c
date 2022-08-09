#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print whatever it gets
 * @format: pointer to the format string
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list any;
	char *str, *spr = "";

	if (format != NULL)
	{
		va_start(any, format);
		i = 0;
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", spr, va_arg(any, int));
					break;
				case 'i':
					printf("%s%d", spr, va_arg(any, int));
					break;
				case 'f':
					printf("%s%f", spr, va_arg(any, double));
					break;
				case 's':
					str = va_arg(any, char *);
					if (str != NULL)
					{
						printf("%s%s", spr, str);
						break;
					}
					printf("%snil", spr);
					break;
				default:
					break;
			}
			spr = ",";
			i++;
		}

		printf("\n");
	}
}
