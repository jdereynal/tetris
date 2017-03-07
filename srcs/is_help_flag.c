/*
** is_help_flag.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Tue Feb 28 11:41:52 2017 remy
** Last update Tue Mar  7 16:19:08 2017 remy
*/

#include "tetris.h"

bool	is_help_flag(char **flags)
{
  int	i;

  i = 1;
  while (flags[i] != NULL)
    {
      if (!my_strcmp(flags[i], "-h"))
	return (true);
      else if (!my_strcmp(flags[i], "--help"))
	return (true);
      ++i;
    }
  return (false);
}
