/*
** colors.c for  in /home/jack/rendu/sokoban/bonus
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Fri Dec 16 17:34:23 2016 jack
** Last update Tue Mar  7 12:44:14 2017 jack
*/

#include "tetris.h"

void	start_colors()
{
  start_color();
  init_pair(0, COLOR_BLACK, COLOR_BLACK);
  init_pair(1, COLOR_WHITE, COLOR_BLACK);
  init_pair(2, COLOR_RED, COLOR_BLACK);
  init_pair(3, COLOR_GREEN, COLOR_BLACK);
  init_pair(4, COLOR_BLUE, COLOR_BLACK);
  init_pair(5, COLOR_YELLOW, COLOR_BLACK);
  init_pair(6, COLOR_CYAN, COLOR_BLACK);
  init_pair(7, COLOR_MAGENTA, COLOR_BLACK);
}
