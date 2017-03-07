/*
** main.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
**
** Made by remy
** Login   <remy@epitech.net>
**
** Started on  Tue Feb 21 15:09:25 2017 remy
** Last update Tue Mar  7 15:02:45 2017 remy
*/

#include <stdlib.h>
#include <stdio.h>
#include "my_printf.h"
#include "tetris.h"

int			setupterm(char *, int, int *);

int			main(int ac, char **av)
{
  t_opt			opt;
  t_list		*my_list;
  t_key_binding		*keys;
  t_list		*tmp;
  t_game		*game;

  opt = check_args(ac, av);
  setupterm((char *)0, 1, (int *)0);
  if ((my_list = get_tetriminos("tetriminos")) == NULL)
    return (RET_FAIL);
  if ((game = game_init()) == NULL)
    return (84);
  sort_list(my_list);
  if ((keys = key_init()) == NULL)
    return (84);
  if (opt == OPT_ERROR)
    return (RET_FAIL);
  else
    launch_opt(opt, av, keys);
  print_keys(keys);
  print_game(game);
  print_tetriminos(my_list);
  init_display(game, my_list);
  return (RET_SUCCESS);
}
