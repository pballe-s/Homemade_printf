/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosanguinetti <pedrosanguinetti@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:06:35 by pballe-s          #+#    #+#             */
/*   Updated: 2023/02/21 16:06:38 by pedrosangui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	size_hex(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

void	dec_to_hex_u(unsigned int n)
{
	if (n >= 16)
	{
		dec_to_hex_u(n / 16);
		dec_to_hex_u(n % 16);
	}
	else
	{
		if (n > 9)
			ft_putchar_fd(('A' + n - 10), 1);
		else
			ft_putnbr_fd(n, 1);
	}
}

int	ft_printf_xu(unsigned int n)
{
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	dec_to_hex_u(n);
	return (size_hex(n));
}
