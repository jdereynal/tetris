/*
** print_char.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Sun Mar 12 21:05:43 2017 jack
** Last update Sun Mar 12 21:17:11 2017 jack
*/

#include "tetris.h"

int		print_char(WINDOW *win, char *c, int color)
{
  if (color >= 1000)
    color -= 1000;
  start_colors();
  attron(COLOR_PAIR(color));
  wprintw(win, "%s", c);
  attroff(COLOR_PAIR(color));
}
