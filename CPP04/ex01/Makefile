# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 10:40:50 by pyammoun          #+#    #+#              #
#    Updated: 2023/02/08 11:07:23 by pyammoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 		=	main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp 
OBJS		=	${SRCS:.cpp=.o}
NAME        =	ex01
CXX      	=	c++
RM       	=	rm -f
CXXFLAGS    =	-Wall -Wextra -Werror -std=c++98 


all:	$(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $< 

$(NAME): $(OBJS)
	$(CXX) $(OBJS) $(CXXFLAGS) -o $(NAME) 
			
clean:
	${RM} ${OBJS}

fclean:        clean
	${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
