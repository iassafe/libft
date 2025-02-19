NAME = libft.a
SRC = ft_isalpha.c ft_memchr.c ft_putchar_fd.c ft_strchr.c ft_strlcpy.c ft_strrchr.c ft_atoi.c ft_isascii.c ft_memcmp.c ft_putendl_fd.c \
	 ft_strdup.c ft_strlen.c ft_strtrim.c ft_bzero.c ft_isdigit.c ft_memcpy.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_substr.c ft_calloc.c \
	 ft_isprint.c ft_memmove.c ft_putstr_fd.c ft_strjoin.c ft_strncmp.c ft_tolower.c ft_isalnum.c ft_itoa.c ft_memset.c ft_split.c ft_strlcat.c \
	 ft_strnstr.c ft_toupper.c
OBJ = ft_isalpha.o ft_memchr.o ft_putchar_fd.o ft_strchr.o ft_strlcpy.o ft_strrchr.o ft_atoi.o ft_isascii.o ft_memcmp.o ft_putendl_fd.o \
	 ft_strdup.o ft_strlen.o ft_strtrim.o ft_bzero.o ft_isdigit.o ft_memcpy.o ft_putnbr_fd.o ft_striteri.o ft_strmapi.o ft_substr.o ft_calloc.o \
	 ft_isprint.o ft_memmove.o ft_putstr_fd.o ft_strjoin.o ft_strncmp.o ft_tolower.o ft_isalnum.o ft_itoa.o ft_memset.o ft_split.o ft_strlcat.o \
	 ft_strnstr.o ft_toupper.o
CC = cc
FLAGS = -Wall -Wextra -Werror
HEADER = libft.h

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $<

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
.PHONY : all re fclean clean