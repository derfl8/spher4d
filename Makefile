NAME		= cub3D
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g -Ofast

MLX			= macroLibX
MLX_LIB		= $(MLX)/libmlx.so
LIBFT_PATH	= libft
LIBFT		= $(LIBFT_PATH)/libft.a

INCLUDES	= -Iinclude -I$(LIBFT_PATH) -I$(MLX)/includes
LIBS		= $(LIBFT) $(MLX_LIB) -lSDL2 -lm

OBJPATH		= obj/
SRCS		=				\
main.c						\
vector/vector_utils.c		\
vector/vector_math.c		\
vector/vector_math2.c		\
vector/vector_len.c			\
vector/vector_angle.c		\
vector/vec_alloc.c			\
rendering/rendering_init.c	\
rendering/raycasting.c		\
rendering/dda.c				\
#parsing/parsing.c			\

OBJS		= $(SRCS:%.c=$(OBJPATH)%.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(MLX_LIB)
	$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

$(OBJPATH)%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_PATH)

$(MLX_LIB):
	make -C $(MLX) -j

bonus: all

clean:
	rm -rf $(OBJPATH)
	make -C $(LIBFT_PATH) clean
	make -C $(MLX) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_PATH) fclean
	make -C $(MLX) fclean

re: fclean all

.PHONY: all bonus clean fclean re
