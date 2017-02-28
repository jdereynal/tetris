/*
** rotate.c for tetris in /home/jack/rendu/psu/tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Mon Feb 27 19:16:50 2017 jack
** Last update Tue Feb 28 10:30:26 2017 jack
*/

#include <stdlib.h>
#include "tetris.h"

int	my_tab_length(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    i++;
  return (i);
}

int	biggest(char **shape)
{
  int	i;
  int	max;

  i = 0;
  max = 0;
  while (shape[i])
    {
      if (my_strlen(shape[i]) > max)
	max = my_strlen(shape[i]);
      i++;
    }
  return (max);
}

char	**rotate(char **shape)
{
  int	i;
  int	j;
  char	**result;
  char	*tmp;

  if ((result = malloc(sizeof(char *) * (biggest(shape) + 1))) == NULL)
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
