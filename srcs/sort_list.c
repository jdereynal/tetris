/*
** sort_list.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Wed Mar  1 16:52:50 2017 jack
** Last update Wed Mar  1 17:25:36 2017 jack
*/

#include "tetris.h"

void		swap(t_list *my_list, t_list *tmp, t_list *tmp2)
{
}

void		sort_list(t_list *my_list)
{
  t_list	*tmp;
  t_list	*tmp2;

  tmp = my_list->next;
  while (tmp)
    {
      tmp2 = my_list->next;
      while (tmp2)
	{
	  if (my_strcmp(tmp2->obj.name, tmp->obj.name) < 0)
	    swap(my_list, tmp, tmp2);
	}
      tmp2 = tmp2->next;
    }
  tmp = tmp->next;
}
