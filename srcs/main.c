/*
** main.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
**
** Made by remy
** Login   <remy@epitech.net>
**
** Started on  Tue Feb 21 15:09:25 2017 remy
** Last update Wed Mar  1 15:35:07 2017 jack
*/

#include <stdlib.h>
#include "my_printf.h"
#include "tetris.h"

int		main(int ac, char **av)
{
  t_opt		opt;
  t_list	*my_list;
  t_list	*tmp;

  opt = check_args(ac, av);
  if (opt == OPT_ERROR)
    return (RET_FAIL);
  else
    launch_opt(opt, av);
  if ((my_list = get_tetriminos("tetriminos")) == NULL)
    return (RET_FAIL);
  print_tetriminos(my_list);
  return (RET_SUCCESS);
}
