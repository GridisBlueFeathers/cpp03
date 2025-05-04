# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svereten <svereten@student.42vienna.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/02 17:39:22 by svereten          #+#    #+#              #
#    Updated: 2025/05/03 17:39:23 by svereten         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = ex01

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -MMD -MP -g

OBJ_DIR = obj

FILES = main \
		ClapTrap \
		ScavTrap \

OBJS = ${FILES:%=${OBJ_DIR}/%.o}
DEPS = ${FILES:%=${OBJ_DIR}/%.d}

OBJ_DIRS = ${sort ${dir ${OBJS}}}

DEBUG = 0

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} $^ -o $@

${OBJ_DIR}/%.o: %.cpp | ${OBJ_DIRS}
	bear --append -- ${CXX} ${CXXFLAGS} -D DEBUG=${DEBUG} -c $< -o $@

${OBJ_DIRS}:
	mkdir -p $@

-include ${DEPS}

clean:
	rm -rf ${OBJ_DIR}
	rm -rf compile_commands.json

fclean: clean
	rm -rf ${NAME}

re: fclean all

run: ${NAME}
	./${NAME} ${ARGS}

valgrind: ${NAME}
	valgrind ./${NAME} ${ARGS}

.PHONY: all clean fclean re run valgrind
