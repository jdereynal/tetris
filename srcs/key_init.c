/*
** key_init.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Tue Feb 28 19:17:23 2017 remy
** Last update Tue Feb 28 21:17:10 2017 remy
*/

#include <ncurses.h>
#include <stdlib.h>
#include "tetris.h"

t_key_binding	*key_init(void)
{
  t_key_binding	*key;

  if ((key = malloc(sizeof(*key))) == NULL)
    return (NULL);
  key->key_drop = KEY_DOWN;
  key->key_left = KEY_LEFT;
  key->key_pause = ' ';
  key->key_quit = 'q';
  key->key_right = KEY_RIGHT;
  key->key_turn = KEY_UP;
  return (key);
}
