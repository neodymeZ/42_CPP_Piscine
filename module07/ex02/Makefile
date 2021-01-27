# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: larosale <larosale@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/22 02:34:03 by larosale          #+#    #+#              #
#    Updated: 2021/01/26 18:08:53 by larosale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= array
CXX				= clang++
CXXFLAGS		= -Wall -Werror -Wextra
NODEPS			= clean fclean re
SRCS			= main.cpp
HDRS			= Array.tpp
OBJS			= $(SRCS:.cpp=.o)
DEPS			= $(SRCS:.cpp=.d)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "\033[90m[\033[32mSuccess\033[90m]\033[32m Successfully \
	compiled $(NAME)\033[0m"

# Include all .d dependency files to the Makefile.
# Including dependencies is conditional - it shall not work when cleaning.

ifeq (0, $(words $(findstring $(MAKECMDGOALS), $(NODEPS))))
-include $(DEPS)
endif

# Generate a dependency file for each source file

%.d: %.cpp $(HDRS)
	@$(CXX) $(CXXFLAGS) $< -MM -MF $@

# Dependencies for .o files are automatically merged with the dependencies from
# .d file for each object

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "\033[90m[\033[32mOK\033[90m]\033[34m Compiling $<\033[0m"

.PHONY: bonus
bonus: all

.PHONY: clean
clean:
	@rm -f $(OBJS) $(DEPS)
	@echo "\033[90m[\033[91mDeleting\033[90m]\033[31m Object and temp files \
	for $(NAME) were deleted\033[0m"

.PHONY: fclean
fclean: clean
	@rm -f $(NAME)
	@echo "\033[90m[\033[91mDeleting\033[90m]\033[31m Executable $(NAME) \
	was deleted\033[0m"

.PHONY: re
re: fclean all
