NAME		=	bureaucrat

SRCDIR		=	srcs
SRCS		=	main.cpp \
				Form.cpp \
				PresidentialPardonForm.cpp \
				ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp \
				Bureaucrat.cpp \
				Intern.cpp

OBJDIR		=	objs
OBJS		=	$(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))
INCLUDES	=	includes

CC			=	clang++
FLAGS		=	-Wall -Werror -Wextra -g -pedantic -I $(INCLUDES) -std=c++98 

all:		$(NAME)
$(NAME):	$(OBJS)
	$(CC) $(FLAGS) $(OBJS)  -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	@$(CC) $(FLAGS) -c $< -o $@

run: all
	./$(NAME)

drun: all
	lldb $(NAME)

clean:
	rm -r $(OBJDIR)

fclean: clean
	rm $(NAME)

re: clean all

phony:
	all fun clean fclean re
