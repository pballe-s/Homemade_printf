/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosanguinetti <pedrosanguinetti@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:34:18 by pballe-s          #+#    #+#             */
/*   Updated: 2023/02/21 16:05:34 by pedrosangui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	size_int_u(unsigned int n)
{
	int				len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_printf_u(unsigned int n)
{
	int	len;

	len = size_int_u(n);
	if (n == 4294967295)
	{
		ft_putchar_fd('4', 1);
		n = 294967295;
	}
	if (n <= 9)
		ft_putchar_fd(n + '0', 1);
	else
	{
		ft_putnbr_fd(n / 10, 1);
		ft_putchar_fd((n % 10) + '0', 1);
	}
	return (len);
}
