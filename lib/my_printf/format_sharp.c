/*
** format_sharp.c for my_printf in /home/remy/blinux/remy.machado/101pong
** 
** Made by remy
** Login   <remy.machado@epitech.eu@epitech.net>
** 
** Started on  Thu Nov 17 19:05:53 2016 remy
** Last update Thu Nov 17 22:06:57 2016 remy
*/

#include "my_printf.h"

int	format_sharp(char mod)
{
  if (mod == 'o')
    my_putchar('0');
  if (mod == 'x')
    my_putstr("0x");
  if (mod == 'X')
    my_putstr("0X");
  return (0);
}
