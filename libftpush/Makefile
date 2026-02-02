NAME = libftpush.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_free_ret.c ft_stack_dup_ver.c ft_stack_create.c ft_stack_zero.c ft_print_stacks.c ft_print_stacks_zero.c ft_stack_copy.c ft_stack_copy_reverse.c ft_stack_copy_single.c ft_stack_ordered.c ft_stack_full_ordered.c ft_rule_sa.c ft_rule_sb.c ft_rule_ss.c ft_rule_pa.c ft_rule_pb.c ft_rule_ra.c ft_rule_rb.c ft_rule_rr.c ft_rule_rra.c ft_rule_rrb.c ft_rule_rrr.c ft_first.c ft_minor_of_all.c ft_num_place.c ft_min_search.c ft_num_rank.c ft_rule_path.c ft_zero_set_sortarr.c ft_min_set_sortarr.c ft_path_choice.c ft_top_check.c ft_stack_reverse.c ft_err_duplic.c ft_free_stacks.c ft_swap_check.c ft_finalize.c ft_print_search_array.c ft_print_algo.c ft_print_algo2.c ft_atoi_long.c ft_atoi_lg.c ft_arg_validation.c

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
