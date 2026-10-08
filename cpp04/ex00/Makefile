NAME = animal

CPP = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRCS =	Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongCat.cpp \
		WrongAnimal.cpp \
		main.cpp

HEADERS = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp
		
OBJDIR = objs
OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp $(HEADERS) | $(OBJDIR)
	@$(CPP) $(FLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@$(RM) $(OBJDIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re