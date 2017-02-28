/*
** ll.c for tetris in /home/jack/rendu/tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Sun Feb 26 15:21:04 2017 jack
** Last update Tue Feb 28 12:11:54 2017 jack
*/

#include <stdlib.h>
#include "tetris.h"

t_list		*init_list(void)
{
  t_list	*list;

  if ((list = malloc(sizeof(*list))) == NULL)
    return (NULL);
  list->next = NULL;
  return (list);
}

int		add_elem_to_list(t_object obj, t_list *my_list)
{
  t_list	*tmp;
  static int	count;

  if ((tmp = malloc(sizeof(*tmp))) == NULL)
    return (RET_FAIL);
  tmp->obj = obj;
  tmp->id = count++;
  tmp->next = my_list->next;
  my_list->next = tmp;
  return (RET_SUCCESS);
}

void		show_list(t_list *my_list)
{
  t_list	*tmp;

  tmp = my_list->next;
  while (tmp != NULL)
    {
      tmp = tmp->next;
    }
}
