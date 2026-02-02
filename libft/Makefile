NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_memchr.c ft_printf_xm.c ft_strmapi.c ft_atoi.c ft_memcmp.c ft_putchar_fd.c ft_strncmp.c ft_bzero.c ft_memcpy.c ft_putendl_fd.c ft_strnstr.c ft_calloc.c ft_memmove.c ft_putnbr_fd.c ft_strrchr.c ft_isalnum.c ft_memset.c ft_putstr_fd.c ft_strtrim.c ft_isalpha.c ftprintf.c ft_split.c ft_substr.c ft_isascii.c ft_printf_c.c ft_tolower.c ft_isdigit.c ft_printf_d.c ft_strchr.c ft_toupper.c ft_isprint.c ft_printf_i.c ft_strdup.c ft_itoa.c ft_printf_p.c ft_striteri.c ft_itoa_hex.c ft_printf_per.c ft_strjoin.c ft_itoa_hexm.c ft_printf_s.c ft_strlcat.c ft_itoa_hexpun.c ft_printf_u.c ft_strlcpy.c ft_itoa_uns_int.c ft_printf_x.c ft_strlen.c get_next_line.c get_next_line_utils.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
