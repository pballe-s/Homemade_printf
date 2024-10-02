/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosanguinetti <pedrosanguinetti@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:46:45 by pballe-s          #+#    #+#             */
/*   Updated: 2023/02/21 16:04:28 by pedrosangui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
int		ft_printf(const char *str, ...);
int		ft_printf_u(unsigned int i);
int		ft_printf_xu(unsigned int n);
int		ft_printf_xl(unsigned int n);
int		ft_printf_p(unsigned long int mem);
int		size_hex(unsigned int n);
int		ft_print_number(int n);
int		ft_print_string(char *str);
int		ft_print_char(int c);

#endif