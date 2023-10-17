# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pyammoun <paolo.yammouni@42lausanne.ch>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 10:40:50 by pyammoun          #+#    #+#              #
#    Updated: 2023/02/16 10:37:02 by pyammoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 		=	main.cpp Bureaucrat.cpp 
OBJS		=	${SRCS:.cpp=.o}
NAME        =	ex00
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
