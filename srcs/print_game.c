/*
** print_game.c for  in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Mon Mar  6 17:56:01 2017 jack
** Last update Mon Mar  6 18:18:12 2017 jack
*/

#include "tetris.h"
#include "printf.h"

int		print_game(t_game *game)
{
  if (game->yes == 1)
    my_printf("Next : Yes\n");
  if (game->yes == 0)
    my_printf("Next : No\n");
  my_printf("Level : %d\n", game->level);
  my_printf("Size : %d*%d\n", game->size_x, game->size_y);
  return (0);
}
