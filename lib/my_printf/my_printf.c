/*
** my_printf.c for my_printf in /home/remy.machado/PSU_2016_my_printf
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Fri Nov 11 15:52:54 2016 remy machado
** Last update Thu Nov 17 16:28:21 2016 remy
*/

#include <stdarg.h>
#include "my_printf.h"

int		my_printf(const char *str, ...)
{
  int		i;
  int		stop;
  va_list	ap;

  stop = 0;
  i = 0;
  if (!str)
    return (84);
  va_start(ap, str);
  my_printf_core(str, &i, &stop, ap);
  va_end(ap);
  return (0);
}
