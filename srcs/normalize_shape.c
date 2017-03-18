/*
** normalize_shape.c for  in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Sat Mar 18 10:19:31 2017 jack
** Last update Sat Mar 18 10:21:24 2017 jack
*/

#include <stdlib.h>
#include "tetris.h"

char	**normalize_shape(char **shape, int height)
{
  int	i;
  int	j;
  int	k;
  char	**result;

  j = 0;
  if (shape == NULL)
    return (NULL);
  i = biggest_line(shape);
  if ((result = malloc(sizeof(char *) * (height + 1))) == NULL)
    return (NULL);
  while (shape[j])
    {
      if ((result[j] = malloc(sizeof(char) * (i + 1))) == NULL)
	return (NULL);
      k = 0;
      while (shape[j][k])
	result[j][k] = shape[j][k++];
      while (k < i)
	result[j][k++] = ' ';
      result[j][k] = '\0';
      j++;
    }
  result[j] = 0;
  return (result);
}
