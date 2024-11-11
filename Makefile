# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obouftou <obouftou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/27 16:31:27 by obouftou          #+#    #+#              #
#    Updated: 2024/11/10 14:47:35 by obouftou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address

MAIN_SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
    ft_bzero.c ft_memcpy.c ft_memmove.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c ft_strdup.c\
	 ft_strlcat.c ft_memchr.c ft_strlcpy.c ft_strrchr.c ft_memcmp.c ft_atoi.c ft_calloc.c ft_strnstr.c ft_substr.c\
	 ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	 ft_striteri.c ft_strmapi.c

BONUS = ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstlast_bonus.c \
	ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c


MAIN_OBJECTS = $(MAIN_SOURCES:.c=.o)

BONUS_OBJECTS = $(BONUS:.c=.o)

.PHONY: all clean fclean re

$(NAME): $(MAIN_OBJECTS)
	ar -r $(NAME) $(MAIN_OBJECTS)

bonus: $(BONUS_OBJECTS)
	ar -r $(NAME) $(BONUS_OBJECTS)

%.o: %.c libft.h
	@$(CC) -c $(CFLAGS) $< -o $@
	@echo "Compiling $<"

all: $(NAME)

clean:
	@echo "Cleaning up object files..."
	@rm -f $(MAIN_OBJECTS)

fclean: clean
	@echo "Cleaning up the library..."
	@rm -f $(NAME)

re: fclean all


# NAME = libft.a

# CC = cc

# FLAGS = -WALL -WERROR -WEXTRA

# MAIN_SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
#     ft_bzero.c ft_memcpy.c ft_memmove.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c ft_strdup.c\
# 	 ft_strlcat.c ft_memchr.c ft_strlcpy.c ft_strrchr.c ft_memcmp.c ft_atoi.c ft_calloc.c ft_strnstr.c ft_substr.c\
# 	 ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
# 	 ft_striteri.c ft_stmapi.c

# BONUS_SRC = ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstlast_bonus.c \
# 	ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstdelone_bonus.c

# M_SRC = $(MAIN_SRC:.c=.o)

# B_SRC = $(BONUS_SRC:.c=.o)

# .PHONY: all clean fclean re

# bonus: $(B_SRC)
# 	ar -r $(NAME) $(B_SRC)

# $(NAME): $(B_SRC) $(M_SRC)
# 	ar -r $(NAME) $(M_SRC) $(B_SRC)

# %.o: %.c libft.h
# 	@(CC) -c $(FLAGS) $< -o $@
# 	@echo "compiling $<"

# all: $(NAME)

# clean:
# 	@echo"cleaning....."
# 	@rm -rf $(M_SRC) $(B_SRC)

# fclean: clean
# 	@echo"cleaning library..."
# 	@em -f $(NAME)

# re: fclean all
