# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csilva-r <csilva-r@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 14:01:38 by csilva-r          #+#    #+#              #
#    Updated: 2024/04/29 17:19:10 by csilva-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_tolower.c ft_toupper.c ft_bzero.c \
		ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_split.c \
		ft_printf.c ft_printf_utils.c get_next_line.c
SRCS_BONUS	= ft_lstadd_front.c ft_lstsize.c \
			ft_lstnew.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c \
			ft_lstiter.c ft_lstmap.c
			
OBJS	:= $(SRCS:%.c=%.o)
OBJS_BONUS := $(SRCS_BONUS:%.c=%.o)

NAME	= libft.a
CC	= cc
RM	= rm -f
CFLAGS	= -Wall -Wextra -Werror -I.

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

bonus:		$(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS_BONUS)
	ranlib $(NAME)

clean:
		$(RM) $(OBJS) $(OBJS_BONUS)
	
fclean:	clean
		$(RM) $(NAME)

re:	fclean all
