# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fportela <fportela@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/14 13:26:14 by marvin            #+#    #+#              #
#    Updated: 2019/11/29 12:38:03 by fportela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I. -c

SRC = 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
				ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c\
				ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
				ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c\
				ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c\
				ft_putstr_fd.c ft_rev_int_tab.c ft_sort_int_tab.c\
				ft_str_is_alpha.c ft_str_is_lowercase.c ft_str_is_numeric.c\
				ft_str_is_printable.c ft_str_is_uppercase.c ft_strcat.c\
				ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strjoin.c\
				ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strlowcase.c\
				ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c\
				ft_strnstr.c ft_strrchr.c ft_split.c ft_strstr.c\
				ft_strtrim.c ft_strupcase.c ft_substr.c ft_tolower.c\
				ft_toupper.c ft_putendl.c\

SRCBONUS =	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c\
			ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c\
			ft_lstsize_bonus.c ft_lstclear_bonus.c ft_lstmap_bonus.c\
			ft_lstnew_bonus.c ft_memcpy.c\
			ft_strlen.c\

OBJ = $(SRC:.c=.o)

OBJBONUS = $(SRCBONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus: $(OBJBONUS)
	ar rc $(NAME) $(OBJBONUS)
	ranlib $(NAME)

clean:
	rm -f $(OBJ) $(OBJBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: clean fclean all re