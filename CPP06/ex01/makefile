# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pyammoun <pyammoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/21 10:50:36 by pyammoun          #+#    #+#              #
#    Updated: 2023/06/21 10:51:39 by pyammoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Data.cpp serialize.cpp
OBJ = $(SRC:.cpp=.o) 
GPP = c++ 
RM = rm -f 
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = convert

all: $(NAME) 

$(NAME): $(OBJ)
		$(GPP) $(CPPFLAGS) -o $(NAME) $(OBJ) 

clean: 
		$(RM) $(OBJ) 

fclean: clean 
		$(RM) $(NAME) 

re: fclean $(NAME) 

.PHONY:        all clean fclean re