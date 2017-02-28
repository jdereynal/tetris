/*
** rotate.c for tetris in /home/jack/rendu/psu/tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Mon Feb 27 19:16:50 2017 jack
** Last update Tue Feb 28 11:55:22 2017 jack
*/

#include <stdlib.h>
#include "tetris.h"

char	**rotate(char **shape)
{
  int	i;
  int	j;
  char	**result;
  char	*tmp;

  if ((result = malloc(sizeof(char *) * (biggest_line(shape) + 1))) == NULL)
    return (NULL);
  if ((tmp = malloc(sizeof(char) * (my_strlen(shape[0] + 1)))) == NULL)
    return (NULL);
  i = 0;
  while (i < my_strlen(shape[0]))
    {
      j = 0;
      while (j < my_tab_length(shape))
	{
	  tmp[j] = result[j][i];
	  j++;
	}
      tmp[j] = '\0';
      result[i] = reverse(tmp);
      i++;
    }
  result[i] = 0;
  return (result);
}
