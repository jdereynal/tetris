/*
** launch_opt.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Tue Feb 28 11:48:31 2017 remy
** Last update Tue Mar  7 15:02:12 2017 remy
*/

#include "tetris.h"

int	launch_opt(t_opt opt, char **argv, t_key_binding *keys)
{
  if (opt == OPT_HELP)
    return (help_flag(argv[0]));
  /* else if (opt == OPT_DEBUG) */
  /*   return (debug_flag()); */
  return (RET_SUCCESS);
}
