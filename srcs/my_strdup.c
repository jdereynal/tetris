/*
** my_strdup.c for tetris in /home/jack/rendu/tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Sun Feb 26 16:02:28 2017 jack
** Last update Tue Feb 28 11:27:20 2017 remy
*/

#include <stdlib.h>
#include "tetris.h"

char	*my_strdup(char *str)
{
  char	*result;
  int	i;

  if ((result = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
    return (NULL);
  i = 0;
  while (str[i])
    {
      result[i] = str[i];
      i++;
    }
  result[i] = '\0';
  return (result);
}
