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
print_int_utils_bonus.c \
print_char_bonus.c \
print_string_bonus.c \
set_specs_bonus.c

OBJS = $(SRC:.c=.o)
BONUSOBJS = $(BONUSSRC:.c=.o)
ALLMAIN = main_bonus_d \
main_bonus_u \
main_bonus_x \
main_bonus_X

NAME = libftprintf.a
BONUS = bonus
TEST = test

RM = rm -Rf
CC = clang
LIB = ar cr
CFLAGS = -Wall -Wextra -Werror
LFLAGS = -L. -lftprintf
INCLUDE = -I libft

LFTOBJS = $(LIBFTDIR)/*.o 
LIBFT = libft
LIBFTDIR = libft
LIBFTFLAGS = -L libft -lft

# RULES

all :			$(NAME)

$(NAME) :		$(OBJS) $(LIBFT)
				$(LIB) $@ $(OBJS) $(LFTOBJS)

$(BONUS) :		$(LIBFT) $(BONUSOBJS)
				$(LIB) $(NAME) $(BONUSOBJS) $(LFTOBJS)

$(TEST) :		$(ALLMAIN)

$(ALLMAIN) :	%: %.c $(BONUS)
				$(CC) -o $@ $< $(LFLAGS)

$(LIBFT) :
				cd $(LIBFTDIR) && $(MAKE) bonus

.c.o :		
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean :
				cd $(LIBFT) && $(MAKE) clean && cd .. && $(RM) $(OBJS) $(BONUSOBJS)

fclean :		clean
				cd $(LIBFT) && $(MAKE) fclean && cd .. && $(RM) $(NAME) $(ALLMAIN)

re :			clean fclean all

.PHONY :		all clean fclean re libft
