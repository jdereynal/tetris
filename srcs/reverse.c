/*
** reverse.c for  in /home/jack/rendu/psu/tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Tue Feb 28 10:25:20 2017 jack
** Last update Tue Feb 28 11:26:52 2017 remy
*/

#include <stdlib.h>
#include "tetris.h"

char	*reverse(char *str)
{
  char	*result;
  int	i;
  int	j;

  if ((result = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
    return (NULL);
  i = 0;
  j = my_strlen(str) - 1;
  while (j >= 0)
    {
      result[i] = str[j];
      i++;
      j--;
    }
  result[i] = '\0';
  return (result);
}
