/*
** tetris.h for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/include
**
** Made by remy
** Login   <remy@epitech.net>
**
** Started on  Tue Feb 21 15:11:51 2017 remy
** Last update Wed Mar  1 20:07:34 2017 remy
*/

#ifndef TETRIS_H_
# define TETRIS_H_

#include <stdbool.h>

# define HELP_FILENAME	"help_file"
# define OPT_ERROR	84
# define OPT_HELP	1
# define RET_FAIL	84
# define RET_SUCCESS	0

typedef int		t_opt;

typedef struct		s_key_binding
{
  int			key_drop;
  int			key_left;
  int			key_pause;
  int			key_quit;
  int			key_right;
  int			key_turn;
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
int		biggest_line(char **);
char		*concatenate(char *, char *);
t_opt		check_args(int, char **);
bool		extension(char *, char *);
t_list		*get_tetriminos(char *);
char		*get_next_line(int);
int		help_flag(char *);
t_list		*init_list(void);
bool		is_help_flag(char *);
int		launch_opt(t_opt, char **);
int		my_getnbr(const char *);
void		my_show_list(t_list *);
char		**my_str_to_wordtab_space(char *);
int		my_strcmp(char *, char *);
char		*my_strdup(char *);
int		my_strlen(char *);
int		my_strncmp(char *, char *, int);
int		my_tab_length(char **);
bool		only_numbers(char *);
int		print_tab(char **);
char		*reverse(char *);
int		sort_list(t_list *);

#endif /* !TETRIS_H_ */
