/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosanguinetti <pedrosanguinetti@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:30:33 by pballe-s          #+#    #+#             */
/*   Updated: 2023/02/21 16:05:07 by pedrosangui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	getlen_ptr(unsigned long int ptr)
{
	int	len;

	len = 0;
	while (ptr > 0)
	{
		ptr = ptr / 16;
		len++;
	}
	return (len);
}

void	convert_ptr(unsigned long int ptr)
{
	if (ptr >= 16)
	{
		convert_ptr(ptr / 16);
		convert_ptr(ptr % 16);
	}
	else
	{
		if (ptr > 9)
			ft_print_char(ptr - 10 + 'a');
		else
			ft_print_char(ptr + '0');
	}
}

int	ft_printf_p(unsigned long int mem)
{
	if (!mem)
	{
		ft_print_string("0x0");
		return (3);
	}
	else
	{
		ft_print_string("0x");
		convert_ptr(mem);
	}
	return (getlen_ptr(mem) + 2);
}
