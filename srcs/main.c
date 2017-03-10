/*
** main.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
**
** Made by remy
** Login   <remy@epitech.net>
**
** Started on  Tue Feb 21 15:09:25 2017 remy
** Last update Fri Mar 10 11:51:23 2017 remy
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
  sort_list(my_list);
  if ((game = game_init()) == NULL)
    return (RET_FAIL);
  if ((keys = key_init()) == NULL)
    return (RET_FAIL);  
  if (opt == OPT_ERROR)
    return (RET_FAIL);
  else
    if (launch_opt(opt, av, keys, game) == RET_FAIL)
      return (RET_FAIL);
  if (opt == OPT_HELP)
    return (RET_SUCCESS);
  if (opt == OPT_DEBUG)
    debug_flag(keys, game, my_list);
  init_display(game, my_list);
  return (RET_SUCCESS);
}
