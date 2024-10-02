/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosanguinetti <pedrosanguinetti@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:15:11 by pballe-s          #+#    #+#             */
/*   Updated: 2023/02/21 15:20:11 by pedrosangui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	set_format(va_list *varg, char format_specifier)
{
	int	len;

	len = 0;
	if (format_specifier == 'c')
		len = len + ft_print_char(va_arg(*varg, int));
	else if (format_specifier == '%')
		len = len + ft_print_char('%');
	else if (format_specifier == 's')
		len = len + ft_print_string(va_arg(*varg, char *));
	else if (format_specifier == 'd' || format_specifier == 'i')
		len = len + ft_print_number(va_arg(*varg, int));
	else if (format_specifier == 'u')
		len = len + ft_printf_u(va_arg(*varg, unsigned int));
	else if (format_specifier == 'x')
		len = len + ft_printf_xl(va_arg(*varg, long int));
	else if (format_specifier == 'X')
		len = len + ft_printf_xu(va_arg(*varg, long int));
	else if (format_specifier == 'p')
		len = len + ft_printf_p(va_arg(*varg, long int));
	return (len);
}

int	ft_printf(const char *print, ...)
{
	va_list	varg;
	int		i;
	int		len;

	va_start(varg, print);
	i = 0;
	len = 0;
	while (print[i])
	{
		if (print[i] == '%')
		{
			len = len + set_format(&varg, print[i + 1]);
			i++;
		}
		else
			len = len + ft_print_char(print[i]);
		i++;
	}
	va_end(varg);
	return (len);
}

/*#include <stdio.h>

int main(void)
{
	int m;
	m = ft_printf("%X", -1);
	printf("\n%d", m);
}*/