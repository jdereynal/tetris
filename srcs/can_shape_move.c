/*
** can_shape_move.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Sat Mar 11 20:04:56 2017 jack
** Last update Sun Mar 12 13:43:21 2017 jack
*/

#include "tetris.h"

int		can_shape_move_down(int **board)
{
  int		i;
  int		j;

  i = 0;
  while (board[i])
    {
      j = 0;
      while (board[i][j] != -1)
	{
	  if (board[i][j] >= 1000)
	    {
	      if (board[i + 1] == 0)
		return (0);
	      if (board[i + 1][j] != 0 && board[i + 1][j] < 1000)
		return (0);
	    }
	  j++;
	}
      i++;
    }
  return (1);
}

int		can_shape_move_right(int **board)
{
  int		i;
  int		j;

  i = 0;
  while (board[i])
    {
      j = 0;
      while (board[i][j] != -1)
	{
	  if (board[i][j] >= 1000)
	    {
	      if (board[i][j + 1] == -1)
		return (0);
	      if (board[i][j + 1] != 0 && board[i][j + 1] < 1000)
		return (0);
	    }
	  j++;
	}
      i++;
    }
  return (1);
}

int		can_shape_move_left(int **board)
{
  int		i;
  int		j;

  i = 0;
  while (board[i])
    {
      j = 0;
      while (board[i][j] != -1)
	{
	  if (board[i][j] >= 1000)
	    {
	      if (j - 1 < 0)
		return (0);
	      if (board[i][j - 1] != 0 && board[i][j - 1] < 1000)
		return (0);
	    }
	  j++;
	}
      i++;
    }
  return (1);
}
