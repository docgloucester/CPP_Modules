# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/04 14:47:57 by rgilles           #+#    #+#              #
#    Updated: 2021/09/09 00:53:51 by rgilles          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		brainzzz
CPPC =		clang++
CPPFLAGS =	-Wall -Wextra -Werror -std=c++98 -g3 -I.

INCL =		

SRCS =		main.cpp	
OBJS =		${SRCS:.cpp=.o}


%.o:		%.cpp ${INCL}
	${CPPC} ${CPPFLAGS} -c $< -o $@

all:		${NAME}

${NAME}:	${OBJS}
	${CPPC} ${CPPFLAGS} -o ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean:		clean
	rm -f ${NAME}

re:			fclean ${NAME}

.PHONY:		clean fclean re