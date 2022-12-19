#This is a make file

SRCS= ft_alnum.c ft_isalpha ft_isascii.c ft.isdigit.c \
        ft_isprint.c 

OBJS= $(SRCS:.c=.o)

BONUS=
BONUS_OBJS= $(BONUS:.c=.o)

cc= gcc
RM= rm -f
CFLAGS: -Wall -Werror -Wextra -I.

NAME: libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus
