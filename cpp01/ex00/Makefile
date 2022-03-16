NAME		=	brains

SRCDIR		=	srcs
SRCS		=	main.cpp \
				newZombie.cpp \
				randomChump.cpp \
				Zombie.cpp
OBJDIR		=	objs
OBJS		=	$(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))
INCLUDES	=	includes

CC			=	clang++
FLAGS		=	-Wall -Werror -Wextra  -pedantic -I $(INCLUDES) -std=c++98 

ARGS		=	Kas Niels Arthur Tijmen Mares

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
	rm $(NAME)

re: fclean all

phony:
	all fun clean fclean re