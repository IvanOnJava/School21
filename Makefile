# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshea <cshea@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/15 23:00:38 by cshea             #+#    #+#              #
#    Updated: 2020/11/16 06:49:58 by cshea            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_memset.c ft_atoi.c ft_bzero.c ft_putchar_fd.c ft_calloc.c ft_putendl_fd.c \
		ft_isalnum.c ft_putnbr_fd.c ft_isalpha.c ft_putstr_fd.c ft_isascii.c ft_split.c \
		ft_isdigit.c ft_strchr.c ft_isprint.c ft_strdup.c ft_itoa.c ft_strjoin.c \
		ft_strlcat.c ft_strlcpy.c ft_strnstr.c ft_strrchr.c ft_memccpy.c ft_strtrim.c ft_memchr.c ft_substr.c ft_memcmp.c \
		ft_tolower.c ft_memcpy.c ft_toupper.c ft_memmove.c ft_strstr.c \
		ft_numbits.c ft_strcat.c ft_islower.c ft_strcmp.c ft_isspace.c \
		ft_strcpy.c ft_isupper.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strrev.c 

BONUS =	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
		ft_lstdelone.c ft_lstiter.c \
		ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
		
OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${BONUS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

bonus:	${OBJS} ${OBJSBONUS}
		ar rcs ${NAME} ${OBJS} ${OBJSBONUS}

all:	${NAME}

clean:
		${RM} ${OBJS} ${OBJSBONUS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all