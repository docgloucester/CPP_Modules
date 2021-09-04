# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/04 14:47:57 by rgilles           #+#    #+#              #
#    Updated: 2021/09/04 14:47:58 by rgilles          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		megaphone
CPPC =		clang++
CPPFLAGS =	-Wall -Wextra -Werror -std=c++98 -g3

INCL =
SRCS =		megaphone.cpp
OBJS = 		${SRCS:.cpp=.o}


%.o:		${INCL} %.cpp
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