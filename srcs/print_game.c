/*
** print_game.c for  in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Mon Mar  6 17:56:01 2017 jack
** Last update Fri Mar 10 18:31:26 2017 jack
*/

#include "tetris.h"
#include "printf.h"

int		print_game(t_game *game)
{
  if (game->hide_next == true)
    my_printf("Next : No\n");
  if (game->hide_next == false)
    my_printf("Next : Yes\n");
  my_printf("Level : %d\n", game->level);
  my_printf("Size : %d*%d\n", game->size_y, game->size_x);
  return (0);
}
