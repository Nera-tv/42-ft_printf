LST_SRCS	=	ft_printf.c	ft_print_c.c	ft_print_s.c	ft_print_d.c	\
			ft_print_percent.c		ft_print_u.c	ft_print_x_upx.c	\
			ft_print_p.c	ft_putchar_fd.c	ft_putstr_fd.c				\
			ft_putnbr_fd.c	ft_putnbr_base_fd.c	ft_putaddress_fd.c		\
			ft_put_unsigned_nbr_fd.c	ft_strlen.c
LST_OBJS	= ${LST_SRCS:.c=.o}
SRCS = $(addprefix sources/,${LST_SRCS})
OBJS = $(addprefix .objects/,${LST_OBJS})
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= 	libftprintf.a
HEADER	=	ft_printf.h

.objects/%.o: sources/%.c $(HEADER)
	mkdir -p .objects
	${CC} ${CFLAGS} -I . -c $< -o $@

${NAME} : $(OBJS)
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all: ${NAME}

clean :
	rm -rf .objects

fclean :	clean
	rm -f ${NAME}

re :		fclean all