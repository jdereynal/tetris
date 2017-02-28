/*
** tetris.h for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/include
**
** Made by remy
** Login   <remy@epitech.net>
**
** Started on  Tue Feb 21 15:11:51 2017 remy
** Last update Tue Feb 28 13:16:00 2017 jack
*/

#ifndef TETRIS_H_
# define TETRIS_H_

#include <stdbool.h>

# define RET_FAIL	84
# define RET_SUCCESS	0

typedef struct		s_object
{
  char			*name;
  char			**shape;
  int			color;
  int			height;
  int			width;
}			t_object;

typedef struct		s_list
{
  t_object		obj;
  int			id;
  struct s_list		*next;
}			t_list;

int		add_elem_to_list(t_object, t_list *);
char		*concatenate(char *, char *);
/* int		check_args(int agrc, char **argv); */
bool		extension(char *, char *);
t_list		*get_tetriminos(char *);
char		*get_next_line(int);
t_list		*init_list();
char		*my_strdup(char *);
int		my_strlen(char *);
char		*reverse(char *);
int		my_tab_length(char **);
int		biggest_line(char **);
bool		only_numbers(char *);
int		print_tab(char **);

#endif /* !TETRIS_H_ */
