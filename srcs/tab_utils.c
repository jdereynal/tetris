/*
** tab_utils.c for tetris in /home/jack/rendu/psu/tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Tue Feb 28 11:53:32 2017 jack
** Last update Tue Feb 28 13:20:53 2017 jack
*/

#include <stdlib.h>
#include "my_printf.h"

int	my_tab_length(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    i++;
  return (i);
}

int	biggest_line(char **shape)
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

int	print_tab(char **tab)
{
  int	i;

  if (tab == NULL)
    return (1);
  i = 0;
  while (tab[i])
    my_printf("%s\n", tab[i++]);
  return (0);
}
