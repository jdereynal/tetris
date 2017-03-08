/*
** key_transactions.c for tetris in /home/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Wed Mar  8 10:20:19 2017 remy machado
** Last update Wed Mar  8 14:15:15 2017 remy
*/

#include "tetris.h"

char    *send_me_key(int index, t_key_binding *keys)
{
  if (index == 0)
    return (keys->key_drop);
  if (index == 1)
    return (keys->key_left);
  if (index == 2)
    return (keys->key_pause);
  if (index == 3)
    return (keys->key_quit);
  if (index == 4)
    return (keys->key_right);
  if (index == 5)
    return (keys->key_turn);
  return (NULL);
}

void    attribute_unknown_seq(int index, char *seq, t_key_binding *keys)
{
  if (index == 0)
    keys->key_drop = seq;
  if (index == 1)
    keys->key_left = seq;
  if (index == 2)
    keys->key_pause = seq;
  if (index == 3)
    keys->key_quit = seq;
  if (index == 4)
    keys->key_right = seq;
  if (index == 5)
    keys->key_turn = seq;
}

void    attribute_key(int index, int index_key, t_key_binding *keys)
{
  if (index == 0)
    keys->key_drop = send_me_key(index_key, keys);
  if (index == 1)
    keys->key_left = send_me_key(index_key, keys);
  if (index == 2)
    keys->key_pause = send_me_key(index_key, keys);
  if (index == 3)
    keys->key_quit = send_me_key(index_key, keys);
  if (index == 4)
    keys->key_right = send_me_key(index_key, keys);
  if (index == 5)
    keys->key_turn = send_me_key(index_key, keys);
}
