/*
** init_game_board.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Mon Mar  6 21:48:34 2017 jack
** Last update Mon Mar  6 22:55:42 2017 jack
*/

#include <stdlib.h>
#include "tetris.h"

int		**init_game_board(t_game *game)
{
  int		**result;
  int		i;
  int		j;

  if ((result = malloc(sizeof(int *) * (game->size_y + 5))) == NULL)
    return (NULL);
  i = 0;
  while (i < game->size_y + 4)
    {
      if ((result[i] = malloc(sizeof(int) * (game->size_x + 1))) == NULL)
	return (NULL);
      j = 0;
      while (j < game->size_x)
	result[i][j++] = 0;
      result[i][j] = -1;
      i++;
    }
  result[i] = 0;
  return (result);
}
