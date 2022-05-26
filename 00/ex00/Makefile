NAME		= megaphone
SRC			= megaphone.cpp
OBJS		= $(SRC:.cpp=.o)
CXX			= clang++
RM			= rm -f
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -I .

all:		$(NAME)

%.o: %.c
			$(CXX) $(CXXFLAGS) -c $< -o $@
			

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)


re:			fclean all

.PHONY:		all clean fclean re