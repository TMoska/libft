CC = gcc
FLAGS = -Wall -Werror -Wextra -I./includes
SDIR = srcs/
SOURCES = *.c
SWDIR = $(addprefix $(SDIR), $(SOURCES))
OBJECTS = $(SOURCES:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTS): $(SWDIR)
	$(CC) -c $(FLAGS) $(SWDIR)

clean:
	rm -f $(OBJECTS)
	find . -name "*~" -name "*.swp" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all
