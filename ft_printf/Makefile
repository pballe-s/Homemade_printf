# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pedrosanguinetti <pedrosanguinetti@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 11:01:41 by pballe-s          #+#    #+#              #
#    Updated: 2023/02/14 15:26:04 by pedrosangui      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

AR = ar -rcs

RM = rm -rf

SRCS =  ft_printf_p.c\
		ft_printf_u.c\
		ft_printf_utils.c\
		ft_printf_xl.c\
		ft_printf_xu.c\
		ft_printf.c\
		ft_print_number.c\
		ft_print_string.c\

OBJS =  ft_printf_p.o\
		ft_printf_u.o\
		ft_printf_utils.o\
		ft_printf_xl.o\
		ft_printf_xu.o\
		ft_printf.o\
		ft_print_number.o\
		ft_print_string.o\

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	
$(OBJS): $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)
	
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:
	clean all