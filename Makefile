# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hurabe <hurabe@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 13:08:39 by hurabe            #+#    #+#              #
#    Updated: 2024/04/23 16:26:28 by hurabe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS   	 	= $(wildcard ft_*.c)
OBJS    	= $(SRCS:.c=.o)
INCS		= -I includes
NAME    	= libft.a

CC        	= cc
RM       	= rm -f
CFLAGS    	= -Wall -Wextra -Werror

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:    clean
	$(RM) $(NAME)

re:    fclean    all

.PHONY:    all clean fclean re
