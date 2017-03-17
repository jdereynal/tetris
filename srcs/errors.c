/*
** errors.c for tetris in /home/jack/rendu/psu/tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Tue Feb 28 12:15:11 2017 jack
** Last update Fri Mar 17 17:35:11 2017 jack
*/

#include "tetris.h"

bool	only_numbers(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < '0' || str[i] > '9')
	if (str[i] != ' ')
	  return (false);
      i++;
    }
  return (true);
}

int	only_tetri_chars(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] != '*' && str[i] != ' ')
	return (0);
      i++;
    }
  return (1);
}
