/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel-baz <noel-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:49:24 by noel-baz          #+#    #+#             */
/*   Updated: 2024/11/22 14:52:28 by noel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRINT_F
# define PRINT_F
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int ft_print(char *format, ...);
int ft_putstrc(char *s);
int	ft_putnbrc(int n);
int	ft_putcharc(char	c);
int	ft_print_p(unsigned int);
int	ft_print_hex_dig(unsigned int  n, int flag, int base);

#endif