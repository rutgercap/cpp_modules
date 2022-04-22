NAME		=	materia

SRCDIR		=	srcs
SRCS		=	main.cpp \
				AMateria.cpp \
				Character.cpp \
				MateriaSource.cpp \
				Cure.cpp \
				Ice.cpp \

OBJDIR		=	objs
OBJS		=	$(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))
INCLUDES	=	includes

CC			=	clang++
FLAGS		=	-Wall -Wextra -Wno-shadow -pedantic -I $(INCLUDES) -std=c++98 -g

all:		$(NAME)
$(NAME):	$(OBJS)
	$(CC) ${FLAGS} ${OBJS}  -o ${NAME}

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

re: fclean all

phony:
	all fun clean fclean re
