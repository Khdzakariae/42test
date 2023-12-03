
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

SRC_1_2	 =	ft_printf.c tools.c 


OBJ = $(SRC_1_2:.c=.o)
all: $(NAME)

%.o : %.c
	cc $(FLAGS) -c $< -o $@
	@echo "SUCCES"

$(NAME): $(OBJ)
	ar rc $@ $^

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all