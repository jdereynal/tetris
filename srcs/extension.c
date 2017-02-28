/*
** extension.c for tetris in /home/jack/rendu/psu/tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Mon Feb 27 15:51:16 2017 jack
** Last update Tue Feb 28 11:29:07 2017 remy
*/

#include "tetris.h"

bool	extension(char *str, char *extension)
{
  int	i;
  int	j;

  i = my_strlen(extension) - 1;
  j = my_strlen(str) - 1;
  while (i >= 0 && j >= 0)
    {
      if (str[j] != extension[i])
      	return (false);
      i--;
      j--;
    }
  return (true);
}
