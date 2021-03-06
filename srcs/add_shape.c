/*
** add_shape.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Tue Mar  7 11:53:08 2017 jack
** Last update Fri Mar 31 16:25:08 2017 jack
*/

#include <time.h>
#include <stdlib.h>
#include "tetris.h"

t_list		*get_shape(t_list *tetriminos)
{
  int		i;
  int		count;
  t_list	*tmp;

  if (tetriminos->next == NULL)
    return (NULL);
  i = get_tetrimino_count(tetriminos);
  count = rand() % i;
  tmp = tetriminos->next;
  while (count && tmp != NULL)
    {
      tmp = tmp->next;
      count--;
    }
  return (tmp);
}

int		**add_shape(t_game *game, t_list *tetriminos)
{
  t_list	*tmp;
  int		i;
  int		j;

  if ((tmp = get_shape(tetriminos)) == NULL)
    return (game->board);
  i = 0;
  while (tmp->obj.shape[i])
    {
      j = 0;
      while (tmp->obj.shape[i][j])
	{
	  if (game->board[i][j + game->size_x / 2] != 0)
	    quit("You lost", 0);
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
