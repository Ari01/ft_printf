# VARS
SRC = convert_base.c \
convert_u.c \
ft_printf.c \
ft_printf_utils.c \
parse_specs.c \
print_adress.c \
print_int.c \
print_char.c \
print_string.c \
set_specs.c

BONUSSRC = convert_base_bonus.c \
convert_u_bonus.c \
ft_printf_bonus.c \
ft_printf_utils_bonus.c \
parse_specs_bonus.c \
print_adress_bonus.c \
print_int_bonus.c \
print_char_bonus.c \
print_string_bonus.c \
set_specs_bonus.c

OBJS = $(SRC:.c=.o)
BONUSOBJS = $(BONUSSRC:.c=.o)
NAME = libftprintf.a
BONUS = bonus
RM = rm -Rf
CC = clang
CFLAGS = -Wall -Wextra -Werror
LFLAGS = -L libft -lft
INCLUDE = -I libft
LIB = ar cr
LIBFT = libft

# RULES

all :		$(NAME)

$(LIBFT) :
			cd $@ && $(MAKE) bonus

$(NAME) :	$(OBJS) $(LIBFT)
			$(LIB) $@ $<

$(BONUS) :	$(BONUSOBJS) $(LIBFT)
			$(LIB) $(NAME) $<

.c.o :		
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) $(INCLUDE)

clean :
			cd $(LIBFT) && $(MAKE) clean && cd .. && $(RM) $(OBJS) $(BONUSOBJS)

fclean :	clean
			cd $(LIBFT) && $(MAKE) fclean && cd .. && $(RM) $(NAME)

re :		clean fclean all

.PHONY :	all clean fclean re libft
