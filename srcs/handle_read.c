/*
** handle_read.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Tue Mar 14 14:06:05 2017 jack
** Last update Tue Mar 14 15:32:37 2017 jack
*/

#include "tetris.h"

int		max_size(t_key_binding *key)
{
  int		max;

  max = 0;
  if (my_strlen(key->key_drop) > max)
    max = my_strlen(key->key_drop);
  if (my_strlen(key->key_left) > max)
    max = my_strlen(key->key_left);
  if (my_strlen(key->key_pause) > max)
    max = my_strlen(key->key_pause);
  if (my_strlen(key->key_quit) > max)
    max = my_strlen(key->key_quit);
  if (my_strlen(key->key_right) > max)
    max = my_strlen(key->key_right);
  if (my_strlen(key->key_turn) > max)
    max = my_strlen(key->key_turn);
  return (max);
}

int		check_match(t_game *game, char *str)
{
  int		**tmp;

  tmp = game->board;
  if (compare(game->keybindings->key_left, str))
      game->board = move_shape_left(game);
  if (compare(game->keybindings->key_right, str))
      game->board = move_shape_right(game);
  if (game->board == tmp)
    return (0);
  return (1);
}

int		handle_read(char *buffer, t_game *game)
{
  static char	*str;

  str = concatenate(str, buffer);
  if (str != NULL)
    if (check_match(game, str) == 1)
      free(str);
  if (str != NULL && my_strlen(str) > max_size(game->keybindings))
    free(str);
}
