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




	// while (*format)
	// {
	// 	if (*format == '%' && is_sp(*(format + 1)))
	// 	{
	// 		counter_format += show(*(format + 1), argument_pointer);
	// 		format++;
	// 	}
	// 	else if (*format == '%' && *(format + 1) == '%')
	// 	{
	// 		counter_format += ft_putcharc(*format);
	// 		format++;
	// 	}
	// 	else if (*format == '%' && (*(format + 1) == '\0'))
	// 		break;
	// 	else if (*format == '%' && *(format + 1) && !is_sp(*(format + 1)))
	// 		counter_format += ft_putcharc(*++format);
	// 	else
	// 		counter_format += ft_putcharc(*format);
	// 	format++;
	// }