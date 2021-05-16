# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 17:43:57 by mochegri          #+#    #+#              #
#    Updated: 2021/05/16 19:44:03 by mochegri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS = ft_strlen.s ft_strcmp.s ft_strcpy.s ft_read.s ft_write.s ft_strdup.s

OBJS = $(SRCS:.s=.o)

.s.o : $(SRCS)
	nasm -f macho64 $<

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	rm *.o

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)
	#rm a.out

re : fclean all

test : all
	gcc main.c $(NAME)
	./a.out