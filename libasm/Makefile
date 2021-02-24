# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 17:43:57 by mochegri          #+#    #+#              #
#    Updated: 2021/02/24 17:55:52 by mochegri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = gcc

AR = ar

NAME = libasm.a

flags = -Wall -Wextra -Werror

nasm = nasm -f macho64

SRCS =	ft_strlen.s \
		ft_strcmp.s \
		ft_strcpy.s \
		ft_strdup.s \
		ft_write.s  \
		ft_read.s   \

all : $(NAME)

$(NAME):
	$(nasm) ft_strlen.s
	$(nasm) ft_strcmp.s
	$(nasm) ft_strcpy.s
	$(nasm) ft_strdup.s
	$(nasm) ft_write.s
	$(nasm) ft_read.s	
	$(AR) rc $(NAME) *.o
	ranlib $(NAME)

bonus:


clean: 
	rm -rf *.o

fclean: clean
	rm -rf *.a

re: fclean all