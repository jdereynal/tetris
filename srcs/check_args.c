/*
** check_args.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Tue Feb 28 11:37:45 2017 remy
** Last update Wed Mar  8 15:15:25 2017 remy
*/

#include "tetris.h"

t_opt	check_args(int argc, char **argv)
{
  if (is_help_flag(argv))
    return (OPT_HELP);
  else if (is_debug_flag(argv))
    return (OPT_DEBUG);
}
