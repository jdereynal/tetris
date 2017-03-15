/*
** game_init.c for  in /home/jack
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Fri Mar  3 16:54:08 2017 jack
** Last update Wed Mar 15 12:11:49 2017 jack
*/

#include <stdlib.h>
#include "tetris.h"

t_game		*game_init()
{
  t_game	*result;

  if ((result = malloc(sizeof(*result))) == NULL)
    return (NULL);
  result->hide_next = false;
  result->level = 0;
  result->size_x = 10;
  result->size_y = 20;
  return (result);
}
