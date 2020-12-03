# VARS
SRC = convert_base.c \
convert_u.c \
ft_printf.c \
parse_specs.c \
print_adress.c \
print_int.c \
print_string.c \
set_specs.c

OBJS = $(SRC:.c=.o)
NAME = libftprintf.a
RM = rm -Rf
CC = clang
CFLAGS = -Wall -Wextra -Werror
LFLAGS = -I libft
LIB = ar cr
LIBFT = libft

# RULES

all :		$(LIBFT) $(NAME)

$(LIBFT) :
			cd $@ && $(MAKE) bonus

$(NAME) :	$(OBJS)
			$(LIB) $@ $^

.c.o :		
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) $(LFLAGS)

clean :
			$(RM) $(OBJS)

fclean :	clean
			$(RM) $(NAME)

re :		clean fclean all

.PHONY :	all clean fclean re libft
