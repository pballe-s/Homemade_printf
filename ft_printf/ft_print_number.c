/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosanguinetti <pedrosanguinetti@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:38:31 by pedrosangui       #+#    #+#             */
/*   Updated: 2023/02/21 16:00:59 by pedrosangui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	size_int(int n)
{
	int	len;
	int	m;

	len = 0;
	m = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		m = n;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	if (m < 0)
		return (len + 1);
	return (len);
}

int	ft_print_number(int n)
{
	int	len;

	len = size_int(n);
	ft_putnbr_fd(n, 1);
	return (len);
}
