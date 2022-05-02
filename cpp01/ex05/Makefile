NAME		=	harl

SRCDIR		=	srcs
SRCS		=	main.cpp \
				Harl.cpp
OBJDIR		=	objs
OBJS		=	$(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))
INCLUDES	=	includes

CC			=	c++
FLAGS		=	-Wall -Werror -Wextra -g -pedantic -I $(INCLUDES) -std=c++98 

all:		$(NAME)
$(NAME):	$(OBJS)
	$(CC) ${FLAGS} ${OBJS}  -o ${NAME}

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	@$(CC) $(FLAGS) -c $< -o $@

run: all
	./$(NAME)

clean:
	rm -r $(OBJDIR)

fclean: clean
	rm $(NAME)

re: fclean all

phony:
	all fun clean fclean re