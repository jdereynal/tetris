/*
** prepare_read.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Tue Mar 14 13:48:50 2017 jack
** Last update Tue Mar 14 13:56:48 2017 jack
*/

#include <sys/ioctl.h>
#include <termios.h>
#include "tetris.h"

void			prepare_read()
{
  struct termios	old;
  struct termios	new;

  ioctl(0, TCGETS, &old);
  new = old;
  new.c_lflag &= ~ECHO;
  new.c_lflag &= ~ICANON;
  new.c_cc[VMIN] = 0;
  new.c_cc[VTIME] = 0;
  ioctl(0, TCSETS, &new);
}
