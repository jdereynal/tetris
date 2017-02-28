/*
** is_help_flag.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Tue Feb 28 11:41:52 2017 remy
** Last update Tue Feb 28 17:20:38 2017 remy
*/

#include "tetris.h"

bool	is_help_flag(char *flag)
{
  int	len;

  if (((len = my_strlen(flag)) != 2) && (len != 6))
    return (false);
  else if ((len == 2) && !my_strcmp(flag, "-h"))
    return (true);
  else if ((len == 6) && !my_strcmp(flag, "--help"))
    return (true);
  return (false);
}
