/*
** moving_shape.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Tue Mar  7 13:42:00 2017 jack
** Last update Tue Mar  7 15:06:31 2017 jack
*/

#include "tetris.h"

int		has_moving_shape(int **board)
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
	    return (1);
	  j++;
	}
      i++;
    }
  return (0);
}
