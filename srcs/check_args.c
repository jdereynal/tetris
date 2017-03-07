/*
** check_args.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Tue Feb 28 11:37:45 2017 remy
** Last update Tue Mar  7 14:59:38 2017 remy
*/

#include "tetris.h"

t_opt	check_args(int argc, char **argv)
{
  if (argc < 2)
    return (OPT_ERROR);
  else if (is_help_flag(argv))
    return (OPT_HELP);
  else if (is_debug_flag(argv))
    return (OPT_DEBUG);
}
