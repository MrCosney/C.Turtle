# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cosney <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/14 09:18:58 by cosney            #+#    #+#              #
#    Updated: 2020/04/15 17:02:36 by cosney           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mr_cucumberg

FILES = srcs/*.c

INCLUDES = includes/

all: $(NAME)

$(NAME):
	@gcc $(FILES) -I$(INCLUDES) -o $(NAME)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
