/*
** check_args.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Tue Feb 28 11:37:45 2017 remy
** Last update Tue Feb 28 21:23:56 2017 remy
*/

#include "tetris.h"

t_opt	check_args(int argc, char **argv)
{
  if (argc < 2)
    return (OPT_ERROR);
  else if ((argc == 2) && (is_help_flag(argv[1])))
    return (OPT_HELP);
  return (RET_FAIL);
}
