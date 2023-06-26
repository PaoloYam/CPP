# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/21 15:22:53 by pyammoun          #+#    #+#              #
#    Updated: 2023/06/21 15:22:56 by pyammoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o) 
GPP = c++ 
RM = rm -f 

NAME = template

all: $(NAME) 

$(NAME): $(OBJ)
		$(GPP) $(CPPFLAGS) -o $(NAME) $(OBJ) 

clean: 
		$(RM) $(OBJ) 

fclean: clean 
		$(RM) $(NAME) 

re: fclean $(NAME) 

.PHONY:        all clean fclean re