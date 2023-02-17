NAME = template

LIBFT = ./libft

SOURCES =	test.c								\
		
FLAGS =  -Wall -Werror -Wextra


RM				= rm -f

OBJECTS = $(SOURCES:.c=.o)

%.o: %.c
	@mkdir -p $(dir $@)
	@echo "/!\ Compiling the "${notdir $<}"."
	@$(CC) $(CCFLAGS) -o $@ -c $<
all: $(NAME)

$(NAME): $(OBJECTS)
	@make bonus --directory=$(LIBFT)
	@$(CC) $(FLAGS) $(OBJECTS) $(LIBFT)/libft.a -o $(NAME)
	@echo $(NAME) built!

clean:
	@make clean --directory=$(LIBFT)
	$(RM) $(OBJECTS)

fclean: clean
	@make fclean --directory=$(LIBFT)
	@rm -f $(OBJECTS) $(NAME)

re: fclean $(NAME)