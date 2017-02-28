/*
** launch_opt.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Tue Feb 28 11:48:31 2017 remy
** Last update Tue Feb 28 17:23:27 2017 remy
*/

#include "tetris.h"

int	launch_opt(t_opt opt)
{
  if (opt == OPT_HELP)
    return (help_flag());
  return (RET_SUCCESS);
}
