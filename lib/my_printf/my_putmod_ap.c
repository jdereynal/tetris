/*
** my_putmod_ap.c for my_printf in /home/remy/blinux/remy.machado/PSU_2016_my_printf
** 
** Made by remy
** Login   <remy.machado@epitech.eu@epitech.net>
** 
** Started on  Wed Nov 16 21:48:52 2016 remy
** Last update Thu Feb 23 11:26:31 2017 remy
*/

#include <unistd.h>
#include <stdarg.h>
#include "my_printf.h"

void    my_putmod_ap(va_list ap)
{
  char  c;

  c = '%';
  UNUSED(ap);
  write(1, &c, 1);
}
