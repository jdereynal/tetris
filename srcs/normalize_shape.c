
/*
** normalize_shape.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Tue Feb 28 11:37:45 2017 remy
** Last update Tue Feb 28 21:23:56 2017 remy
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
