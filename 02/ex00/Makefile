NAME		= Canon
SRC			= main.cpp Fixed.cpp
OBJS		= $(SRC:.cpp=.o)
CXX			= clang++
RM			= rm -f
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -I .

all:		$(NAME)

%.o: %.c
			$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(OBJS)

re:			fclean all

.PHONY:		all clean fclean re