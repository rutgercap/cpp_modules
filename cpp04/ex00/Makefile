NAME		=	poly

SRCDIR		=	srcs
SRCS		=	main.cpp \
				Animal.cpp \
				WrongAnimal.cpp \
				Cat.cpp \
				Dog.cpp \
				WrongCat.cpp \

OBJDIR		=	objs
OBJS		=	$(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))
INCLUDES	=	includes

CC			=	clang++
FLAGS		=	-Wall -Werror -Wextra -Wno-shadow -pedantic -I $(INCLUDES) -std=c++98 

all:		$(NAME)
$(NAME):	$(OBJS)
	$(CC) ${FLAGS} ${OBJS}  -o ${NAME}

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	@$(CC) $(FLAGS) -c $< -o $@

run: all
	./$(NAME) $(ARGS)

clean:
	rm -r $(OBJDIR)

fclean: clean

re: fclean all

phony:
	all fun clean fclean re
