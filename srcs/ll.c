/*
** ll.c for tetris in /home/jack/rendu/tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Sun Feb 26 15:21:04 2017 jack
** Last update Wed Mar  1 19:09:38 2017 remy
*/

#include <stdlib.h>
#include "my_printf.h"
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
  t_list	*nw_cell;
  static int	count;

  if ((nw_cell = malloc(sizeof(*nw_cell))) == NULL)
    return (RET_FAIL);
  nw_cell->obj = obj;
  nw_cell->id = count++;
  nw_cell->next = my_list->next;
  my_list->next = nw_cell;
  return (RET_SUCCESS);
}

void		my_show_list(t_list *my_list)
{
  t_list	*tmp;

  tmp = my_list->next;
  while (tmp != NULL)
    {
      my_printf("Cellule [%d] : [%s]\n", tmp->id, tmp->obj.name);
      tmp = tmp->next;
    }
}
