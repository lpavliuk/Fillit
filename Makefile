# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysamchuk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/02 19:37:48 by ysamchuk          #+#    #+#              #
#    Updated: 2018/04/03 11:55:47 by opavliuk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

SRC_NAME = ft_check_elem1.c \
	ft_check_elem2.c ft_check_file.c \
	ft_check_tetrim.c ft_end_lst.c \
	ft_lst_free.c ft_write_lst.c \
	ft_fillit.c ft_lst_len.c \
	ft_del_elem.c ft_array.c \
	ft_exit_program.c main.c

OBJ = $(SRC:.c=.o)

SRC= $(addprefix $(FIL_DIR), $(SRC_NAME))

LIB_DIR= libft/
FIL_DIR= fillitsrc/

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIB_DIR) --silent
	gcc	$(FLAGS) $(OBJ) -o $(NAME) -L $(LIB_DIR) -lft

%.o: $(FIL_DIR)%.c
	gcc $(FLAGS) -o $@ -c $< -I $(LIB_DIR)

clean:
	make -C $(LIB_DIR) clean --silent
	/bin/rm -f $(OBJ)

fclean:	clean
	make -C $(LIB_DIR) fclean --silent
	/bin/rm -f $(NAME)

re:	fclean	all

.PHONY: clean fclean all re
