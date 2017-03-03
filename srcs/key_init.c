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
  key->key_drop = tigetstr("kcud1");
  key->key_left = tigetstr("kcub1");
  key->key_pause = my_strdup(" ");
  key->key_quit = my_strdup("q");
  key->key_right = tigetstr("kcua1");
  key->key_turn = tigetstr("kcuu1");
  return (key);
}
