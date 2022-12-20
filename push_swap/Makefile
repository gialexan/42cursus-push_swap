# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gialexan <gialexan@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 19:08:49 by gialexan          #+#    #+#              #
#    Updated: 2022/12/20 16:57:13 by gialexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 				push_swap

SRC_FILE = 			main.c 					\
					lstnew.c				\
					lstsize.c				\
					lstlast.c       		\
					lstclear.c				\
					lstadd_back.c 			\
					lstadd_front.c 			\
					reverse_rotate.c		\
					rotate.c				\
					push.c 					\
					swap.c					\
					print.c					\
					myclear.c 				\
					auxiliary.c				\
					sort_five.c 			\
					radix_sort.c 			\
					sort_three.c			

SRC_DIR = 			src

LIBFT_DIR = 		libft

SRC = 				$(addprefix $(SRC_DIR)/, $(SRC_FILE))

SRC_OBJ = 			$(SRC:.c=.o)

LIBFT = 			./libft/libft.a

RM = 				rm -f

CFLAGS = 			-g

CC = 				cc $(CFLAGS)

all:	$(NAME)

$(NAME):			$(LIBFT) $(SRC_OBJ)
					$(CC) $(SRC_OBJ) $(LIBFT) -o $(NAME)

run:
	./push_swap    71 100 97 36 55

$(LIBFT):
					$(MAKE) -C $(LIBFT_DIR)

clean:
					$(MAKE) clean -C $(LIBFT_DIR)
					$(RM) $(SRC_OBJ)
					
fclean:				clean
					$(MAKE) fclean -C $(LIBFT_DIR)
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re libft