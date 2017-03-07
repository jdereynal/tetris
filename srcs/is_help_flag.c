/*
** is_help_flag.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Tue Feb 28 11:41:52 2017 remy
** Last update Tue Mar  7 12:28:07 2017 remy
*/

#include "tetris.h"

bool	is_help_flag(char **flags)
{
  int	i;
  int	len;

  i = 1;
  while (flags[i] != NULL)
    {
      len = my_strlen(flags[i]);
      if ((len == 2) && !my_strcmp(flags[i], "-h"))
	return (true);
      else if ((len == 6) && !my_strcmp(flags[i], "--help"))
	return (true);
      ++i;
    }
  return (false);
}
