/*
** rotate.c for tetris in /home/jack/rendu/psu/tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Mon Feb 27 19:16:50 2017 jack
** Last update Sat Mar 18 10:04:44 2017 jack
*/

#include <stdlib.h>
#include "tetris.h"

int		*get_column(t_game *game, int i)
{
  int		j;
  int		*result;

  j = 0;
  if ((result = malloc(sizeof(int *) * (game->size_y + 1))) == NULL)
    return (NULL);
  while (game->board[j] != 0)
    {
      result[j] = game->board[j][i];
      j++;
    }
  result[j] = 0;
  return (result);
}

int		**rotate_shape(t_game *game)
{
  return (game->board);
}
