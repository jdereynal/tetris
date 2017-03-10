/*
** check_final_binding.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Fri Mar 10 12:07:55 2017 remy
** Last update Fri Mar 10 12:23:38 2017 remy
*/

#include "tetris.h"

int	how_many_same_key(t_key_binding *keys, char *cmpkey)
{
  int	how_many;

  how_many = 0;
  if (!my_strcmp(keys->key_drop, cmpkey))
    ++how_many;
  if (!my_strcmp(keys->key_left, cmpkey))
    ++how_many;
  if (!my_strcmp(keys->key_pause, cmpkey))
    ++how_many;
  if (!my_strcmp(keys->key_quit, cmpkey))
    ++how_many;
  if (!my_strcmp(keys->key_right, cmpkey))
    ++how_many;
  if (!my_strcmp(keys->key_turn, cmpkey))
    ++how_many;
  return (how_many);
}

int	check_final_binding(t_key_binding *keys)
{
  if (how_many_same_key(keys, keys->key_drop) > 1)
    return (RET_FAIL);
  if (how_many_same_key(keys, keys->key_left) > 1)
    return (RET_FAIL);
  if (how_many_same_key(keys, keys->key_pause) > 1)
    return (RET_FAIL);
  if (how_many_same_key(keys, keys->key_quit) > 1)
    return (RET_FAIL);
  if (how_many_same_key(keys, keys->key_right) > 1)
    return (RET_FAIL);
  if (how_many_same_key(keys, keys->key_turn) > 1)
    return (RET_FAIL);
  return (RET_SUCCESS);
}
