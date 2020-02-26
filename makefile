NAME = my_ls

SRC =	src/main.c\
		src/my_ls.c\
		src/my_opt.c\
		src/my_putchar.c\
		src/my_strcmp.c\
		src/my_putstr.c\
		src/my_putnbr.c\
		src/my_strlen.c\

RE = rm -f

CPPFLAGS = -I ./include

CFLAGS = -Wall -Werror -Wextra -std=c11

$(NAME)	:	
			gcc $(CFLAGS) $(SRC) $(CPPFLAGS) -o $(NAME)

all:		$(NAME)

clean:
			$(RM)	$(NAME)

re:			clean all

.PHONY:		all clean re