/*
** tetris.h for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/include
**
** Made by remy
** Login   <remy@epitech.net>
**
** Started on  Tue Feb 21 15:11:51 2017 remy
** Last update Sun Mar 12 14:22:43 2017 jack
*/

#ifndef TETRIS_H_
# define TETRIS_H_

#include <stdbool.h>
#include <stdlib.h>
#include <ncurses.h>

# define HELP_FILENAME	"help_file"
# define NB_OF_KEYS	6
# define OPT_DEBUG	2
# define OPT_ERROR	84
# define OPT_HELP	1
# define RET_FAIL	84
# define RET_SUCCESS	0

typedef int		t_opt;

typedef struct		s_game
{
  bool			hide_next;
  int			level;
  int			size_x;
  int			size_y;
  WINDOW		*window;
  int			**board;
}			t_game;

typedef struct		s_key_binding
{
  char			*key_drop;
  char			*key_left;
  char			*key_pause;
  char			*key_quit;
  char			*key_right;
  char			*key_turn;
}			t_key_binding;

typedef struct		s_object
{
  char			*name;
  char			**shape;
  int			color;
  int			height;
  int			width;
  int			error;
}			t_object;

typedef struct		s_list
{
  t_object		obj;
  int			id;
  struct s_list		*next;
}			t_list;

int		add_elem_to_list(t_object, t_list *);
int		**add_shape(t_game *, t_list *);
void		attribute_key(int, int, t_key_binding *);
void		attribute_unknown_seq(int, char *, t_key_binding *);
int		biggest_line(char **);
int		can_shape_move_down(int **);
int		can_shape_move_left(int **);
int		can_shape_move_right(int **);
int		change_keys(char **, t_key_binding *);
int		change_settings(char **, t_game *);
char		*concatenate(char *, char *);
t_opt		check_args(int, char **);
t_opt		check_final_binding(t_key_binding *);
int		debug_flag(t_key_binding *, t_game *, t_list *);
bool		extension(char *, char *);
t_list		*get_tetriminos(char *);
int		get_tetrimino_count(t_list *);
char		*get_next_line(int);
t_game		*game_init();
int		has_moving_shape(int **);
int		help_flag(char *);
t_list		*init_list(void);
int		init_display(t_game *, t_list *);
int		**init_game_board(t_game *);
bool		is_debug_flag(char **);
bool		is_help_flag(char **);
t_key_binding	*key_init();
int		launch_opt(t_opt, char **, t_key_binding *, t_game *);
int		**move_shape_left(t_game *);
int		**move_shape_right(t_game *);
int		my_printf(const char *, ...);
int		my_getnbr(const char *);
void		my_show_list(t_list *);
char		**my_str_to_wordtab_space(char *);
int		my_str_isnum(char *);
int		my_strcmp(char *, char *);
int		my_strcmp_no_bz(char *, char *);
char		*my_strdup(char *);
int		my_strlen(char *);
int		my_strncmp(char *, char *, int);
int		my_tab_length(char **);
bool		only_numbers(char *);
int		print_tab(char **);
char		*reverse(char *);
int		sort_list(t_list *);
char		**normalize_shape(char **, int);
char		**str_to_wordtab(char *, char);
int		print_tetriminos(t_list *);
int		print_keys(t_key_binding *);
int		print_game(t_game *);
char		*send_me_key(int, t_key_binding *);
int		**update_board(t_game *);

#endif /* !TETRIS_H_ */
