/*
** my_putchar_mod.c for my_printf in /home/remy/blinux/remy.machado/PSU_2016_my_printf
** 
** Made by remy
** Login   <remy.machado@epitech.eu@epitech.net>
** 
** Started on  Thu Nov 17 14:00:23 2016 remy
** Last update Thu Feb 23 11:27:17 2017 remy
*/

#include <stdarg.h>
#include <unistd.h>
#include "my_printf.h"

void	my_putchar_mod(va_list ap)
{
  char	c;

  c = '%';
  UNUSED(ap);
  write(1, &c, 1);
}
