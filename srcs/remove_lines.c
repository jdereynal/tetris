/*
** remove_lines.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Mon Mar 13 13:19:42 2017 jack
** Last update Mon Mar 13 14:20:49 2017 jack
*/

#include "tetris.h"

int		**apply_gravity(t_game *game)
{
  int		i;
  int		j;

  i = 0;
  while (game->board[i])
    {
      j = 0;
      while (game->board[i][j] != -1)
	{
	  if (game->board[i][j] > 0 && game->board[i][j] < 1000)
	    if (game->board[i + 1] != 0 && game->board[i + 1][j] == 0)
	      {
		game->board[i + 1][j] = game->board[i][j];
		game->board[i][j] = 0;
	      }
	  j++;
	}
      i++;
    }
  return (game->board);
}

int		**remove_line(int **board, int line)
{
  int		i;
  int		j;

  i = 0;
  while (board[line][i] != -1)
    board[line][i++] = 0;
  i = 0;
  return (board);
}

int		**remove_lines(t_game *game)
{
  int		i;
  int		j;

  i = 0;
  while (game->board[i])
    {
      j = 0;
      while (game->board[i][j] != -1)
	{
	  if (game->board[i][j] == 0 || game->board[i][j] >= 1000)
	    break ;
	  if (game->board[i][j + 1] == -1)
	    {
	      game->board = remove_line(game->board, i);
	      game->board = apply_gravity(game);
	    }
	  j++;
	}
      i++;
    }
  return (game->board);
}
