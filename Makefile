NAME		= cub3D
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g -Ofast

MLX			= MacroLibX
MLX_LIB		= $(MLX)/libmlx.so
LIBFT_PATH	= libft
LIBFT		= $(LIBFT_PATH)/libft.a

INCLUDES	= -Iinclude -I$(LIBFT_PATH) -I$(MLX)/includes
LIBS		= $(LIBFT) $(MLX_LIB) -lSDL2 -lm

OBJPATH		= obj/
SRCS		=						\
src/main.c						\
src/utils.c						\
src/parsing/read_file.c			\

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

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all bonus clean fclean re
