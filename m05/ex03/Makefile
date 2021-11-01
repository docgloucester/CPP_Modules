# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/04 14:47:57 by rgilles           #+#    #+#              #
#    Updated: 2021/11/01 15:28:57 by rgilles          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		bureaucrat03
CPPC =		c++
CPPFLAGS =	-Wall -Wextra -Werror -std=c++98 -g3 -I.

INCL =		Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp\
				ShrubberyCreationForm.hpp Intern.hpp Bureaucrat.hpp
SRCS =		Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp\
				ShrubberyCreationForm.cpp Intern.cpp Bureaucrat.cpp main.cpp
OBJS =		${SRCS:.cpp=.o}


%.o:		%.cpp ${INCL}
	${CPPC} ${CPPFLAGS} -c $< -o $@

all:		${NAME}

${NAME}:	${OBJS}
	${CPPC} ${CPPFLAGS} -o ${NAME} ${OBJS}

clean:
	rm -f ${OBJS} *_shrubbery

fclean:		clean
	rm -f ${NAME}

re:			fclean ${NAME}

.PHONY:		clean fclean re