/*
** update_board.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Tue Mar  7 12:12:21 2017 jack
** Last update Tue Mar  7 14:33:47 2017 jack
*/

#include "tetris.h"

int		**update_shape(t_game *game)
{
  int		i;
  int		j;
  int		**result;

  i = 0;
  if ((result = malloc(sizeof(char) * (game->size_y + 1))) == NULL)
    return (NULL);
  while (game->board[i])
    i++;
  while (i >= 0)
    {
      j = 0;
      while (game->board[i][j] != -1)
  	{
	  if (game->board[i][j] != 0 && game->board[i][j] >= 2000)
	    game->board[i][j] = game->board[i][j] - 2000;
  	  j++;
  	}
      i--;
    }
  return (game->board);
}

int		**update_board(t_game *game)
{
  int		i;
  int		j;

  i = 0;
  while (game->board[i])
    i++;
  i -= 1;
  while (i >= 0)
    {
      j = 0;
      while (game->board[i][j] != -1)
	{
	  if (game->board[i][j] != 0 && game->board[i + 1] != 0)
	    if (game->board[i + 1][j] == 0)
	      {
		game->board[i + 1][j] = game->board[i][j];
		game->board[i][j] = 0;
	      }
	    else
	      return (update_shape(game));
	  j++;
	}
      i--;
    }
  return (game->board);
}
