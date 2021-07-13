NAME = ft_display_file
SRC = src/
INC = includes/
MAIN = main/
FLAGS = -Wall -Wextra -Werror
LIB = libft.a


all: $(NAME)

lib:
	gcc -c $(SRC)*.c -I $(INC)
	ar cr $(LIB) *.o

$(NAME): lib
	gcc $(FLAGS) $(MAIN)*.c -L . -lft -I $(INC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(LIB)
	rm -f $(NAME)