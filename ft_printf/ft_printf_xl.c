/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosanguinetti <pedrosanguinetti@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:59:40 by pballe-s          #+#    #+#             */
/*   Updated: 2023/02/21 16:06:32 by pedrosangui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	dec_to_hex_l(unsigned int n)
{
	if (n >= 16)
	{
		dec_to_hex_l(n / 16);
		dec_to_hex_l(n % 16);
	}
	else
	{
		if (n > 9)
			ft_putchar_fd(('a' + n - 10), 1);
		else
			ft_putnbr_fd(n, 1);
	}
}

int	ft_printf_xl(unsigned int n)
{
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	dec_to_hex_l(n);
	return (size_hex(n));
}
