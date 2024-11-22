/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel-baz <noel-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:40:22 by noel-baz          #+#    #+#             */
/*   Updated: 2024/11/22 14:59:39 by noel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_print(char *format, ...)
{
    va_list argument_pointer;
    int counter_format = 0;
	
    va_start(argument_pointer, format);
    while (*format)
    {
        if (*format == '%' && *(format + 1) == 's')
        {
            counter_format += ft_putstrc(va_arg(argument_pointer, char*));
            format++;
        }
		else if (*format == '%' &&( (*(format + 1) == 'd') || (*(format + 1) == 'i')))
		{
			counter_format += ft_putnbrc(va_arg(argument_pointer, int));
			format++;
		}
		else if(*format == '%' && *(format + 1) == 'c')
		{
            counter_format += ft_putcharc(va_arg(argument_pointer, int));  
            format++;
		}
		else if(*format == '%' && *(format + 1) == 'c')
		{
            counter_format += ft_putcharc(va_arg(argument_pointer, int));  
            format++;
		}
		else if (*format == '%' && *(format + 1) == 'x')
		{
			counter_format += ft_print_hex_dig(va_arg(argument_pointer, unsigned int), 0, 16);
			format++;
		}
		else if (*format == '%' && *(format + 1) == 'X')
		{
			counter_format += ft_print_hex_dig(va_arg(argument_pointer, unsigned int), 1, 16);
			format++;
		}
		else if (*format == '%' && *(format + 1) == 'u')
		{
			counter_format += ft_print_hex_dig(va_arg(argument_pointer, unsigned int), 2, 10);
			format++;
		}
		else if (*format == '%' && *(format + 1) == 'p')
		{
			counter_format += ft_print_hex_dig(va_arg(argument_pointer, unsigned int), 2, 10);
			format++;
		}
		else if (*format == '%' && *(format + 1) == '%')
		{
			counter_format += ft_putcharc(*format);
			format++;
		}
		else if (*format == '%' && *(format + 1) == '\0')
		{
			break;
		}
        else
        {
            counter_format += ft_putcharc(*format);
        }
        format++;
    }
    va_end(argument_pointer);
	return(counter_format);
}
// #include <stdint.h>
// int main(void)
// {
//     // int x = ft_print("Hello %s, how are you %s?, Are you under %d?\n", "Noreddine", "today", 18);  // Output: Hello Noreddine, how are you today?
// 	// ft_print("%d\n", x);
//     // int y = printf("Hello %s, how are you %s?, Are you under %d?\n", "Noreddine", "today", 18);  // Output: Hello Noreddine, how are you today?
// 	// printf("%d\n", y);
//     // int x = ft_print("Hello %c %s %c %c %d %i\n", 'n', "oreddi", 'n', 'e', 2004, -2);  // Output: Hello Noreddine, how are you today?
// 	// ft_print("%d\n", x);
//     // int y = printf("Hello %c %s %c %c %d %i\n", 'n', "oreddi", 'n', 'e', 2004, -2);  // Output: Hello Noreddine, how are you today?
// 	// printf("%d\n", y);
// 	//printf("%u", -1);
// 	// int x = printf("%u\n", 1200);
// 	// int y = ft_print_hex_dig(1200, 3, 10);
// 	//printf("\n %d %d", x, y);
// 	// int x = ;
	
// 	// uintptr_t addr = (uintptr_t)x;

// 	// printf("0x%x\n", x);
// 	// char *s = "hjdshjds";
// 	int s = 15;
// 	printf("%p\n", s);
// 	ft_print_p(s);
// 	//printf("%p\n", s);
// 	//ft_putstrc(s);
// 	return 0;
// }
