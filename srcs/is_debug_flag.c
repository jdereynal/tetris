/*
** is_debug_flag.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Tue Mar  7 14:57:07 2017 remy
** Last update Tue Mar  7 14:57:53 2017 remy
*/

#include "tetris.h"

bool    is_debug_flag(char **flags)
{
  int   i;
  int   len;

  i = 1;
  while (flags[i] != NULL)
    {
      len = my_strlen(flags[i]);
      if ((len == 2) && !my_strcmp(flags[i], "-d"))
	return (true);
      else if ((len == 7) && !my_strcmp(flags[i], "--debug"))
	return (true);
      ++i;
    }
  return (false);
}
