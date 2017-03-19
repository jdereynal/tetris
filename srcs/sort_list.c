/*
** sort_list.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Wed Mar  1 16:52:50 2017 jack
** Last update Sun Mar 19 12:55:38 2017 remy machado
*/

#include <stdlib.h>
#include "tetris.h"

void		inject_back(t_list *my_list, t_object *obj_array)
{
  int		index;
  t_list	*tmp;

  index = 0;
  tmp = my_list->next;
  while (tmp != NULL)
    {
      tmp->obj = obj_array[index];
      tmp = tmp->next;
      ++index;
    }
}

void		sort_objs(t_object *obj_array, int nb_object)
{
  int		index;
  int		iter;
  int		length;
  t_object	tmp;

  iter = (nb_object + 1);
  while (--iter)
    {
      index = (-1);
      while (obj_array[++index + 1].name != NULL)
	{
	  if (my_strcmp(obj_array[index].name,
			obj_array[index + 1].name) > 0)
	    {
	      tmp = obj_array[index];
	      obj_array[index] = obj_array[index + 1];
	      obj_array[index + 1] = tmp;
	    }
	}
    }
}

int		sort_list(t_list *my_list)
{
  int		index;
  int		nb_object;
  t_list	*tmp;
  t_object	*obj_array;

  index = 0;
  tmp = my_list->next;
  nb_object = (tmp->id + 1);
  if ((obj_array = malloc(sizeof(t_object) * (nb_object + 1))) == NULL)
    return (RET_FAIL);
  obj_array[nb_object].name = NULL;
  while (tmp != NULL)
    {
      obj_array[index] = tmp->obj;
      tmp = tmp->next;
      ++index;
    }
  sort_objs(obj_array, nb_object);
  inject_back(my_list, obj_array);
  return (RET_SUCCESS);
}
