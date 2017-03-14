/*
** main.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
**
** Made by remy
** Login   <remy@epitech.net>
**
** Started on  Tue Feb 21 15:09:25 2017 remy
** Last update Tue Mar 14 14:34:04 2017 jack
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
  t_list		*tmp;
  t_game		*game;

  opt = check_args(ac, av);
  if ((my_list = get_tetriminos("tetriminos")) == NULL)
    return (RET_FAIL);
  setupterm((char *)0, 1, (int *)0);
  sort_list(my_list);
  if ((game = game_init()) == NULL)
    return (RET_FAIL);
  if ((game->keybindings = key_init()) == NULL)
    return (RET_FAIL);
  if (opt == OPT_ERROR)
    return (RET_FAIL);
  else
    if (launch_opt(opt, av, game->keybindings, game) == RET_FAIL)
      return (RET_FAIL);
  if (opt == OPT_HELP)
    return (RET_SUCCESS);
  if (opt == OPT_DEBUG)
    debug_flag(game->keybindings, game, my_list);
  return (init_display(game, my_list));
}
