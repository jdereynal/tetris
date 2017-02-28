/*
** tetris.h for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/include
**
** Made by remy
** Login   <remy@epitech.net>
**
** Started on  Tue Feb 21 15:11:51 2017 remy
** Last update Tue Feb 28 11:54:31 2017 remy
*/

#ifndef TETRIS_H_
# define TETRIS_H_

#include <stdbool.h>

# define OPT_ERROR	84
# define OPT_HELP	1
# define RET_FAIL	84
# define RET_SUCCESS	0

typedef int		t_opt;

typedef struct		s_object
{
  char			*name;
  int			color;
  int			height;
  int			width;
}			t_object;

typedef struct		s_list
{
  t_object		obj;
  struct s_list		*next;
}			t_list;

int		add_elem_to_list(t_object, t_list *);
char		*concatenate(char *, char *);
t_opt		check_args(int, char **);
bool		extension(char *, char *);
t_list		*get_tetriminos(char *);
char		*get_next_line(int);
t_list		*init_list();
int		launch_opt(t_opt);
char		*my_strdup(char *);
int		my_strlen(char *);
char		*reverse(char *);

#endif /* !TETRIS_H_ */
