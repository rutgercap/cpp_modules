NAME		=	replace

SRCDIR		=	srcs
SRCS		=	main.cpp \
				Replacer.cpp
OBJDIR		=	objs
OBJS		=	$(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))
INCLUDES	=	includes

CC			=	c++
FLAGS		=	-Wall -Werror -g -pedantic -I $(INCLUDES) -std=c++98 

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
	rm $(addsuffix .replace, $(TESTFILE))

re: fclean all

phony:
	all fun clean fclean re