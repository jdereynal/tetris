/*
** is_debug_flag.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Tue Mar  7 14:57:07 2017 remy
** Last update Tue Mar  7 16:18:40 2017 remy
*/

#include "tetris.h"

bool    is_debug_flag(char **flags)
{
  int   i;

  i = 1;
  while (flags[i] != NULL)
    {
      if (!my_strcmp(flags[i], "-d"))
	return (true);
      else if (!my_strcmp(flags[i], "--debug"))
	return (true);
      ++i;
    }
  return (false);
}
