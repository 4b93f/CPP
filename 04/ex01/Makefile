NAME		= Animal_brain
SRC			= Cat.cpp main.cpp Dog.cpp Animal.cpp Brain.cpp
OBJS		= $(SRC:.cpp=.o)
CPP			= clang++
RM			= rm -f
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -I .

all:		$(NAME)

%.o: %.c
			$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(OBJS)

re:			fclean all

.PHONY:		all clean fclean re