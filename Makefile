# MAKE COMMANDS
NAME = libftprintf.a
BONUS = bonus
TEST = test

# SRCS OBJS and EXECS
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

# COMPIL
CC = clang
CFLAGS = -Wall -Wextra -Werror
LFLAGS = -L. -lftprintf
LIBFTDIR = libft/
LIBFT = $(LIBFTDIR)libft.a

# OTHER VARS
TOGGLE_BONUS = no
RM = rm -Rf

# ALL RULE
all :			$(NAME)

ifeq ($(TOGGLE_BONUS), yes)
$(NAME) :		$(BONUSOBJS)
				cd $(LIBFTDIR) && $(MAKE) $(BONUS)
				cp $(LIBFT) $@
				ar cr $@ $(BONUSOBJS)
else
$(NAME) :		$(OBJS)
				cd $(LIBFTDIR) && $(MAKE) $(BONUS)
				cp $(LIBFT) $@
				ar cr $@ $(OBJS)
endif

$(BONUS) :		
				make TOGGLE_BONUS=yes

# TESTS RULES
$(TEST) :		$(ALLMAIN)

$(ALLMAIN) :	%: %.c $(BONUS)
				$(CC) -o $@ $< $(LFLAGS)

# COMPILE CLEAN RE
.c.o :		
				$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean :
				cd $(LIBFTDIR) && $(MAKE) clean && cd .. && $(RM) $(OBJS) $(BONUSOBJS)

fclean :		clean
				cd $(LIBFTDIR) && $(MAKE) fclean && cd .. && $(RM) $(NAME) $(ALLMAIN)

re :			clean fclean all

.PHONY :		all clean fclean re
