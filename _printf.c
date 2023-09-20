#include "main.h"
/**
 * _printf - printf pro
 * @format: inputed string
 * @..: variable number of argument
 * Return: char variable
 */
int _printf(const char *format, ...);
{
        int add = 0;
        int i;

        va_list my_list;
        va_start (my_list, format);
        if(format == NULL)
                return -1;
        for(i = 0; format[i] != '\0'; i++)
        {
                if(format[i] != '%')
                {
                        putchar(%);
                        add++;
                }
                else
                {
                        i++;
                }
                else if(format[i] == 'c')
                {
                        char c = va_arg(my_list, char);
                                putchar(c);
                        add++;
                }
                else if(format[i] == 's')
                {
                        char *s = va_arg(my_list, char *);
                                int length = 0;
                        while(str[length] != '\0')
                                length++;
		}
	}
	add++;
	va_end(my_list);
}
