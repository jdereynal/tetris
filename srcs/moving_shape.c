/*
** moving_shape.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Tue Mar  7 13:42:00 2017 jack
** Last update Tue Mar  7 13:55:13 2017 jack
*/

#include "tetris.h"

int		has_moving_shape(t_game *game)
{
  int		i;
  int		j;

  i = 0;
  while (game->board[i])
    {
      j = 0;
      while (game->board[i][j] != -1)
	{
	  if (game->board[i][j] >= 1000)
	    return (1);
	  j++;
	}
      i++;
    }
  return (0);
}
