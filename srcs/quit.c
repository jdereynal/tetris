/*
** quit.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
** 
** Made by jack
** Login   <jack@epitech.net>
** 
** Started on  Tue Mar 14 10:26:58 2017 jack
** Last update Tue Mar 14 10:27:48 2017 jack
*/

#include "tetris.h"

int	quit(char *msg, int status)
{
  endwin();
  my_printf("%s\n", msg);
  exit(status);
}
