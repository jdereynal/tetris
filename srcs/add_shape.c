/*
** add_shape.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Tue Mar  7 11:53:08 2017 jack
** Last update Tue Mar  7 13:59:41 2017 jack
*/

#include "tetris.h"

int		**add_shape(t_game *game, t_list *tetriminos)
{
  t_list	*tmp;
  int		i;
  int		j;

  tmp = tetriminos->next;
  tmp = tmp->next->next;
  i = 0;
  while (tmp->obj.shape[i])
    {
      j = 0;
      while (tmp->obj.shape[i][j])
	{
	  if (tmp->obj.shape[i][j] == ' ')
	    game->board[i][j + game->size_x / 2] = 0;
	  else
	    game->board[i][j + game->size_x / 2] = tmp->obj.color + 1000;
	  j++;
	}
      i++;
    }
  return (game->board);
}
