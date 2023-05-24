CC=cc
CFLAGS="-Wall -Wextra -Werror"
SRCS="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"

$CC $CFLAGS -c $SRCS

ar rucs libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
