/*
** debug_flag.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
**
** Made by remy
** Login   <remy@epitech.net>
**
** Started on  Wed Mar  8 14:34:06 2017 remy
** Last update Fri Mar 17 11:14:15 2017 jack
*/

#include "my_printf.h"
#include "tetris.h"

int	debug_flag(t_key_binding *keys, t_game *game, t_list *my_list)
{
  my_printf("*** DEBUG MODE ***\n");
  print_keys(keys);
  print_game(game);
  print_tetriminos(my_list);
  my_printf("Press any key to start Tetris\n");
  press_any_key();
  return (RET_SUCCESS);
}
