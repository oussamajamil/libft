# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 09:34:39 by ojamil            #+#    #+#              #
#    Updated: 2021/11/05 16:16:00 by ojamil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# SRCS = $(wildcard *.c)
# FLAG = gcc -Wall -Wextra -Werror
# NAME = libft.a
# OBJS = $(SRCS:.c=.o)

# $(NAME) :
# $(FLAG) -c $(SRCS)
# ar cr $(NAME) $(OBJS)
# all : $(NAME)
# clean :
# rm $(OBJS)
# fclean : clean 
# rm -rf $(NAME)
# re : fclean all 

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC =	ft_strnstr.c\
		ft_strncmp.c\
		ft_tolower.c\
		ft_toupper.c    \
		ft_atoi.c \
		ft_memset.c     \
		ft_bzero.c       \
		ft_strdup.c \
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_strlen.c     \
		ft_isalpha.c    \
		ft_isdigit.c    \
		ft_isalnum.c    \
		ft_isascii.c    \
		ft_strchr.c \
		ft_strrchr.c \
		ft_memcpy.c \
		ft_strlcat.c \
		ft_strlcpy.c    \
		ft_isprint.c    \
		ft_calloc.c     \
		ft_substr.c\
		ft_memchr.c     \
		ft_strjoin.c \
		ft_strtrim.c    \
		ft_memcmp.c\
		ft_memmove.c\
		ft_strmapi.c \
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_itoa.c \
		#calloc problem\
		# ft_memcpy.c     \
		# ft_memmove.c    \
		# ft_memchr.c     \
		# ft_memcmp.c     \
		# ft_strlen.c     \
		# ft_isalpha.c    \
		# ft_isdigit.c    \
		# ft_isalnum.c    \
		# ft_isascii.c    \
		# ft_isprint.c    \
		# ft_toupper.c    \
		# ft_tolower.c    \
		# ft_strchr.c     \
		# ft_strrchr.c    \
		# ft_strncmp.c    \
		# ft_strlcpy.c    \
		# ft_strlcat.c    \
		# ft_strnstr.c    \
		# ft_atoi.c       \
		# ft_calloc.c     \
		# ft_strdup.c     \
		ft_substr.c     \
		# ft_strjoin.c    \
		# ft_split.c      \
		# ft_putchar_fd.c \
		# ft_itoa.c       \
		# ft_strmapi.c    \
		# ft_putchar_fd.c \
		# ft_putstr_fd.c  \
		# ft_putendl_fd.c \
		# ft_putnbr_fd.c


OBJECTS = $(SRC:.c=.o)

INCLUDES = libft.h \

all: $(NAME)

$(NAME): $(OBJECTS) $(INCLUDES)
	ar rcs $(NAME) $(OBJECTS)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
