# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hirokiurabe <hirokiurabe@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 13:08:39 by hurabe            #+#    #+#              #
#    Updated: 2025/12/17 22:03:32 by hirokiurabe      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
RM      = rm -f

INCLUDES = -Iincludes

MANDATORY_SRCS = \
	mandatory/ctype/ft_isalpha.c \
	mandatory/ctype/ft_isdigit.c \
	mandatory/ctype/ft_isalnum.c \
	mandatory/ctype/ft_isascii.c \
	mandatory/ctype/ft_isprint.c \
	mandatory/ctype/ft_toupper.c \
	mandatory/ctype/ft_tolower.c \
	mandatory/string/ft_strlen.c \
	mandatory/string/ft_strchr.c \
	mandatory/string/ft_strrchr.c \
	mandatory/string/ft_strncmp.c \
	mandatory/string/ft_strnstr.c \
	mandatory/string/ft_strlcpy.c \
	mandatory/string/ft_strlcat.c \
	mandatory/string/ft_strdup.c \
	mandatory/string/ft_strjoin.c \
	mandatory/string/ft_strtrim.c \
	mandatory/string/ft_split.c \
	mandatory/string/ft_substr.c \
	mandatory/string/ft_strmapi.c \
	mandatory/string/ft_striteri.c \
	mandatory/string/ft_atoi.c \
	mandatory/string/ft_itoa.c \
	mandatory/memory/ft_memset.c \
	mandatory/memory/ft_bzero.c \
	mandatory/memory/ft_memcpy.c \
	mandatory/memory/ft_memmove.c \
	mandatory/memory/ft_memchr.c \
	mandatory/memory/ft_memcmp.c \
	mandatory/memory/ft_calloc.c \
	mandatory/io/ft_putchar_fd.c \
	mandatory/io/ft_putstr_fd.c \
	mandatory/io/ft_putendl_fd.c \
	mandatory/io/ft_putnbr_fd.c

LIST_SRCS = \
	list/ft_lstnew.c \
	list/ft_lstadd_front.c \
	list/ft_lstsize.c \
	list/ft_lstlast.c \
	list/ft_lstadd_back.c \
	list/ft_lstdelone.c \
	list/ft_lstclear.c \
	list/ft_lstiter.c \
	list/ft_lstmap.c

EXTRA_SRCS = \
	additional/ft_abs.c

SRCS = $(MANDATORY_SRCS) $(LIST_SRCS) $(EXTRA_SRCS)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re