/*
** main.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
**
** Made by remy
** Login   <remy@epitech.net>
**
** Started on  Tue Feb 21 15:09:25 2017 remy
** Last update Tue Feb 28 18:21:56 2017 remy
*/

#include <stdlib.h>
#include "my_printf.h"
#include "tetris.h"

int		main(int ac, char **av)
{
  t_opt		opt;
  t_list	*my_list = NULL;
  t_list	*tmp = NULL;

  opt = check_args(ac, av);
  if (opt == OPT_ERROR)
    return (RET_FAIL);
  else
    return (launch_opt(opt));
  my_list = get_tetriminos(av[1]);
  tmp = my_list->next;
  while (tmp)
    {
      my_printf("%s\n", tmp->obj.name);
      tmp = tmp->next;
    }
  return (RET_SUCCESS);
}
