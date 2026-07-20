NAME = phonebook

CPP = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRCS =	main.cpp \
		PhoneBook.cpp \
		Contact.cpp

HEADERS = Contact.hpp PhoneBook.hpp
		
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