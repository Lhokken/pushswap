NAME        = push_swap

CC          = cc
CFLAGS      = -Wall -Wextra -Werror

LIBFT_DIR       = ./libft
LIBFTPUSH_DIR   = ./libftpush

INCLUDES    = -I$(LIBFT_DIR) -I$(LIBFTPUSH_DIR)

SRCS        = push_swap_main.c
OBJS        = $(SRCS:.c=.o)

LIBFT       = $(LIBFT_DIR)/libft.a
LIBFTPUSH   = $(LIBFTPUSH_DIR)/libftpush.a

all: $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(LIBFTPUSH):
	@make -C $(LIBFTPUSH_DIR)

$(NAME): $(OBJS) $(LIBFT) $(LIBFTPUSH)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -L$(LIBFTPUSH_DIR) -lftpush -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@make -C $(LIBFT_DIR) clean
	@make -C $(LIBFTPUSH_DIR) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@make -C $(LIBFTPUSH_DIR) fclean

re: fclean all

test50x: all
	@total=0; \
	for i in $$(seq 1 200); do \
		ARG=$$(seq -100000 100000 | shuf -n 50); \
		RESULT=$$(./$(NAME) $$ARG | tr -dc '0-9'); \
		echo "Run $$i: $$RESULT mosse"; \
		total=$$(($$total + $$RESULT)); \
	done; \
	echo "Media: $$(($$total / 200))"

test100: all
	@ARG=$$(seq -1000000 1000000 | shuf -n 100); \
	./$(NAME) $$ARG; \

test100x: all
	@total=0; \
	for i in $$(seq 1 1000); do \
		ARG=$$(seq -100000 100000 | shuf -n 100); \
		RESULT=$$(./$(NAME) $$ARG | tr -dc '0-9'); \
		echo "Run $$i: $$RESULT mosse"; \
		total=$$(($$total + $$RESULT)); \
	done; \
	echo "Media: $$(($$total / 1000))"

test500: all
	@ARG=$$(seq -1000000 1000000 | shuf -n 500); \
	./$(NAME) $$ARG; \
	
test500x: all
	@total=0; \
	for i in $$(seq 1 1000); do \
		ARG=$$(seq -100000 100000 | shuf -n 500); \
		RESULT=$$(./$(NAME) $$ARG | tr -dc '0-9'); \
		echo "Run $$i: $$RESULT mosse"; \
		total=$$(($$total + $$RESULT)); \
	done; \
	echo "Media: $$(($$total / 1000))"

.PHONY: all clean fclean re test50x test100 test100x test500 test500x
