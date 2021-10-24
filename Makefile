NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -c
FILES = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_isalpha.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_split.c


BONUSFILES = ft_lstnew.c \
			 ft_lstadd_front.c \
			 ft_lstsize.c \
			 ft_lstlast.c \
			 ft_lstadd_back.c \
			 ft_lstdelone.c \
			 ft_lstclear.c \
			 ft_lstiter.c \
			 ft_lstmap.c

BONUSOBJ = $(BONUSFILES:%.c=%.o)

OBJ = $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	$(CC) $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ) $(BONUSOBJ)

fclean: clean
	rm -f $(NAME) $(BONUSNAME)

re: fclean all

$(BONUSOBJ): $(BONUSFILES)
	$(CC) $(CFLAGS) $(BONUSFILES)

bonus: $(OBJ) $(BONUSOBJ)
	ar rcs $(NAME) $(BONUSOBJ) $(OBJ)

test:
	echo "hi, I am working as test"

f : fclean
