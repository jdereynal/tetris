/*
** debug_flag.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Wed Mar  8 14:34:06 2017 remy
** Last update Wed Mar  8 15:11:56 2017 remy
*/

#include "my_printf.h"
#include "tetris.h"

int	debug_flag(t_key_binding *keys, t_game *game, t_list *my_list)
{
  my_printf("*** DEBUG MODE ***\n");
  print_keys(keys);
  print_game(game);
  print_tetriminos(my_list);
  return (RET_SUCCESS);
}
