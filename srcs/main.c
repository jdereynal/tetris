/*
** main.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
**
** Made by remy
** Login   <remy@epitech.net>
**
** Started on  Tue Feb 21 15:09:25 2017 remy
** Last update Tue Feb 28 13:17:29 2017 jack
*/

#include "my_printf.h"
#include "tetris.h"

int		main(int ac, char **av)
{
  t_list	*my_list;

  my_list = get_tetriminos(av[1]);
  t_list *tmp = my_list->next;
  while (tmp)
    {
      my_printf("%s\n", tmp->obj.name);
      print_tab(tmp->obj.shape);
      tmp = tmp->next;
    }
  return (RET_SUCCESS);
}
