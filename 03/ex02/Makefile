NAME		= FragTrap
SRC			= ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp
OBJS		= $(SRC:.cpp=.o)
CXX			= clang++
RM			= rm -f
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -I .

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(OBJS)

re:			fclean all

.PHONY:		all clean fclean re