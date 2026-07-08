NAME = megaphone

CPP = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CPP) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
