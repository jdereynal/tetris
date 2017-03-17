/*
** print_game.c for  in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Mon Mar  6 17:56:01 2017 jack
** Last update Fri Mar 17 13:46:37 2017 jack
*/

#include "tetris.h"
#include "printf.h"

int		print_game(t_game *game)
{
  if (game->hide_next == true)
    my_printf("Next : No\n");
  if (game->hide_next == false)
    my_printf("Next : Yes\n");
  my_printf("Level : %d\n", game->level + 1);
  my_printf("Size : %d*%d\n", game->size_y, game->size_x);
  return (0);
}
