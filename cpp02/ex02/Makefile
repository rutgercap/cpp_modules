NAME		=	fixed

SRCDIR		=	srcs
SRCS		=	main.cpp \
				Fixed.cpp
OBJDIR		=	objs
OBJS		=	$(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))
INCLUDES	=	includes

CC			=	clang++
FLAGS		=	-Wall -Werror -Wextra -pedantic -I $(INCLUDES) -std=c++98 

all:		$(NAME)
$(NAME):	$(OBJDIR) $(OBJS)
	$(CC) $(FLAGS) $(OBJS)  -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@$(CC) $(FLAGS) -c $< -o $@

run: all
	./$(NAME) 
	
$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	rm -r $(OBJDIR)

fclean: clean
	rm $(NAME)

re: fclean all

phony:
	all run clean fclean re
