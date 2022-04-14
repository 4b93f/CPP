NAME		= Zombie
SRC			= Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
OBJS		= $(SRC:.cpp=.o)
CXX			= clang++
RM			= rm -f
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -I .

all:		$(NAME)

%.o: %.c
			@$(CXX) $(CXXFLAGS) -c $< -o $@
		
$(NAME):	$(OBJS)
			$(CXX) $(FLAGS) -o $(NAME) $(OBJS)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(OBJS)

re:			fclean all

.PHONY:		all clean fclean re