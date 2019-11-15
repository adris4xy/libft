# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 13:37:00 by aortega-          #+#    #+#              #
#    Updated: 2019/11/15 11:17:05 by aortega-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c 

BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	= ${SRCS:.c=.o}

BONUSOB	= ${BONUS:.c=.o}

NAME	= libft.a 

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra -g

.c.o:	= ${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:	$(NAME)

$(NAME): 
		 ${CC} ${CFLAGS} -c ${SRCS}
		 ar rc ${NAME}		${OBJS}
		 ranlib ${NAME}

bonus:	
		 ${CC} ${CFLAGS} -c ${SRCS} ${BONUS}
		 ar rc ${NAME}		${OBJS} ${BONUSOB}
		 ranlib ${NAME}

clean:
		${RM} ${OBJS} ${BONUSOB}

fclean:		clean
		${RM} ${NAME}

re:		fclean bonus
