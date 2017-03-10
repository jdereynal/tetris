/*
** launch_opt.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Tue Feb 28 11:48:31 2017 remy
** Last update Fri Mar 10 12:25:10 2017 remy
*/

#include "tetris.h"

int	launch_opt(t_opt opt, char **argv,
		   t_key_binding *keys, t_game *game)
{
  if (opt == OPT_HELP)
    return (help_flag(argv[0]));
  else
    {
      if (change_settings(argv, game) == RET_FAIL)
	return (RET_FAIL);
      if (change_keys(argv, keys) == RET_FAIL)
	return (RET_FAIL);
      if (check_final_binding(keys) == RET_FAIL)
	return (RET_FAIL);
    }
  return (RET_SUCCESS);
}
