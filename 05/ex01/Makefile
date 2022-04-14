NAME		= Bureaucrat
SRC			= main.cpp Bureaucrat.cpp Form.cpp
OBJS		= $(SRC:.cpp=.o)
CC			= clang++
RM			= rm -f
FLAGS	= -Wall -Wextra -Werror -std=c++98 -I .

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
			@$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(OBJS)

re:			fclean all

.PHONY:		all clean fclean re