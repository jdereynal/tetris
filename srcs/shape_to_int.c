/*
** shape_to_int.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Mon Mar  6 21:48:34 2017 jack
** Last update Mon Mar  6 22:49:06 2017 jack
*/

#include <stdlib.h>
#include "tetris.h"

int		**shape_to_int(t_object *obj)
{
  int		**result;
  int		i;
  int		j;

  if ((result = malloc(sizeof(int *) * (obj->height + 1))) == NULL)
    return (NULL);
  i = 0;
  while (obj->shape[i])
    {
      if ((result[i] = malloc(sizeof(int) * (obj->width + 1))) == NULL)
	return (NULL);
      j = 0;
      while (obj->shape[i][j])
	{
	  if (obj->shape[i][j] == ' ')
	    result[i][j] = 0;
	  else
	    result[i][j] = obj->color;
	  j++;
	}
      result[i][j] = -1;
      i++;
    }
  result[i] = 0;
  return (result);
}
