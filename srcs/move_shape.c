/*
** move_shape.c for tetri in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Tue Mar  7 16:56:30 2017 jack
** Last update Tue Mar  7 17:29:32 2017 jack
*/

#include "tetris.h"

int		**move_shape_right(t_game *game)
{
  int		i;
  int		j;

  i = 0;
  while (game->board[i])
    {
      j = 0;
      while (game->board[i][j] != -1)
	j++;
      j--;
      while (j >= 0)
	{
	  if (game->board[i][j] == 0 && game->board[i][j - 1] >= 1000)
	    {
	      game->board[i][j] = game->board[i][j - 1];
	      game->board[i][j - 1] = 0;
	    }
	  j--;
	}
      i++;
    }
  return (game->board);
}

int		**move_shape_left(t_game *game)
{
  int		i;
  int		j;

  i = 0;
  while (game->board[i])
    {
      j = 0;
      while (game->board[i][j] != -1)
	{
	  if (game->board[i][j] == 0 && game->board[i][j + 1] >= 1000)
	    {
	      game->board[i][j] = game->board[i][j + 1];
	      game->board[i][j + 1] = 0;
	    }
	  j++;
	}
      i++;
    }
  return (game->board);
}
