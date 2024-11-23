/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel-baz <noel-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:59:11 by noel-baz          #+#    #+#             */
/*   Updated: 2024/11/22 15:00:03 by noel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_p(unsigned int add)
{
	int	count;
	
	count = 0;
	//unsigned int add = (unsigned int)ptr;
	count += ft_putstrc("0x");
	count += ft_print_hex_dig(add, 0, 16);
	return (count);
}