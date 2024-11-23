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

static int is_sp(char c)
{
	return (c == 's' || c == 'i' || c == 'd' || c == 'X' || c == 'x' || c == 'u' || c == 'p' || c == 'c');
}
int	show(char sp, va_list ap)
{
	if (sp == 's')
		return (ft_putstrc(va_arg(ap, char *)));
	else if (sp == 'd' || sp == 'i')
		return (ft_putnbrc(va_arg(ap, int)));
	else if (sp == 'x')
		return (ft_print_hex_dig(va_arg(ap, unsigned int), 0, 16));
	else if (sp == 'X')
		return (ft_print_hex_dig(va_arg(ap, unsigned int), 1, 16));
	else if (sp == 'u')
		return (ft_print_hex_dig(va_arg(ap, unsigned int), 2, 10));
	else if (sp == 'p')
		return (ft_print_p(va_arg(ap, unsigned int)));
	else if (sp == 'c')
		return (ft_putcharc(va_arg(ap, int)));
	return (0);
}

int ft_print(char *format, ...)
{
    va_list argument_pointer;
    int counter_format = 0;
	
    va_start(argument_pointer, format);
    // while (*format)
    // {
    //     if (*format == '%' && *(format + 1) == 's')
    //     {
    //         counter_format += ft_putstrc(va_arg(argument_pointer, char*));
    //         format++;
    //     }
	// 	else if (*format == '%' &&( (*(format + 1) == 'd') || (*(format + 1) == 'i')))
	// 	{
	// 		counter_format += ft_putnbrc(va_arg(argument_pointer, int));
	// 		format++;
	// 	}
	// 	else if(*format == '%' && *(format + 1) == 'c')
	// 	{
    //         counter_format += ft_putcharc(va_arg(argument_pointer, int));  
    //         format++;
	// 	}
	// 	else if(*format == '%' && *(format + 1) == 'c')
	// 	{
    //         counter_format += ft_putcharc(va_arg(argument_pointer, int));  
    //         format++;
	// 	}
	// 	else if (*format == '%' && *(format + 1) == 'x')
	// 	{
	// 		counter_format += ft_print_hex_dig(va_arg(argument_pointer, unsigned int), 0, 16);
	// 		format++;
	// 	}
	// 	else if (*format == '%' && *(format + 1) == 'X')
	// 	{
	// 		counter_format += ft_print_hex_dig(va_arg(argument_pointer, unsigned int), 1, 16);
	// 		format++;
	// 	}
	// 	else if (*format == '%' && *(format + 1) == 'u')
	// 	{
	// 		counter_format += ft_print_hex_dig(va_arg(argument_pointer, unsigned int), 2, 10);
	// 		format++;
	// 	}
	// 	else if (*format == '%' && *(format + 1) == 'p')
	// 	{
	// 		counter_format += ft_print_hex_dig(va_arg(argument_pointer, unsigned int), 2, 10);
	// 		format++;
	// 	}
	// 	else if (*format == '%' && *(format + 1) == '%')
	// 	{
	// 		counter_format += ft_putcharc(*format);
	// 		format++;
	// 	}
	// 	else if (*format == '%' && *(format + 1) == '\0')
	// 	{
	// 		break;
	// 	}
    //     else
    //     {
    //         counter_format += ft_putcharc(*format);
    //     }
    //     format++;
    // }
	while (*format)
	{
		if (*format == '%' && is_sp(*(format + 1)))
		{
			counter_format += show(*(format + 1), argument_pointer);
			format++;
		}
		else if (*format == '%' && *(format + 1) == '\0')
			break;
		else
			counter_format += ft_putcharc(*format);
		format++;
	}
    va_end(argument_pointer);
	return(counter_format);
}

