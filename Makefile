NAME   =	justify
CFLAGS =	-Wall -Werror -Wextra
SRC    =	src/justify.c \
			src/word.c    \
			src/line.c
HEADER =	src/include/justify.h \
			src/include/word.h    \
			src/include/line.h

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	cc $(CFLAGS) $(SRC) -o justify

clean:
	rm -rf justify

re: clean all
