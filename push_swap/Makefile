# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 19:08:49 by gialexan          #+#    #+#              #
#    Updated: 2022/12/09 13:58:39 by gialexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 				push_swap

#NAME_BONUS =		pipex_bonus

SRC_FILE = 			main.c 					\
					lstnew.c				\
					lstlast.c				\
					lstadd_back.c 			\
					lstadd_front.c 			\
					push.c 					\
					swap.c					\
					rotate.c				\
					reverse_rotate.c

#SRC_FILE_BONUS =	pipex_bonus.c cmd_bonus.c destroy_bonus.c exec_bonus.c

SRC_DIR = 			src

#SRC_DIR_BONUS =		src_bonus

LIBFT_DIR = 		libft

SRC = 				$(addprefix $(SRC_DIR)/, $(SRC_FILE))

#SRC_BONUS =			$(addprefix $(SRC_DIR_BONUS)/, $(SRC_FILE_BONUS))

SRC_OBJ = 			$(SRC:.c=.o)

#SRC_OBJ_BONUS =		$(SRC_BONUS:.c=.o)

LIBFT = 			./libft/libft.a

RM = 				rm -f

CFLAGS = 			-g

CC = 				cc $(CFLAGS)

all:	$(NAME)

#bonus:	$(NAME_BONUS)

$(NAME):			$(LIBFT) $(SRC_OBJ)
					$(CC) $(SRC_OBJ) $(LIBFT) -o $(NAME)

run:
	./push_swap					

#$(NAME_BONUS):		$(LIBFT) $(SRC_OBJ_BONUS)
#					$(CC) $(SRC_OBJ_BONUS) $(LIBFT) -o $(NAME_BONUS)

$(LIBFT):
					$(MAKE) -C $(LIBFT_DIR)

clean:
					$(MAKE) clean -C $(LIBFT_DIR)
					$(RM) $(SRC_OBJ)
#					$(RM) $(SRC_OBJ_BONUS)
					
fclean:				clean
					$(MAKE) fclean -C $(LIBFT_DIR)
					$(RM) $(NAME)
#					$(RM) $(NAME_BONUS)

re:					fclean all

.PHONY:				all clean fclean re libft