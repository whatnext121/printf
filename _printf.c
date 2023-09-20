#include "main.h"
/**
 * _printf - printf string
 * @format: inputed string
 * @..: variable number of argument
 * Return: char variable
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, count = 0;
	int flags, width, precision, size, buff_in = 0;
	va_list My_list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(My_list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_in++] = format[i];
			if (buff_in == BUFF_SIZE)
				print_buffer(buffer, &buff_in);
			count++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, My_list);
			precision = get_precision(format, &i, My_list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, My_list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			count += printed;
		}
	print_buffer(buffer, &buff_in);
	va_end(My_list);
	return (count);
	}
}
