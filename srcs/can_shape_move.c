/*
** can_shape_move.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Sat Mar 11 20:04:56 2017 jack
** Last update Sun Mar 12 11:27:33 2017 jack
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
