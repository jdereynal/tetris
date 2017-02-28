/*
** format_mod.c for my_printf in /home/remy/blinux/remy.machado/PSU_2016_my_printf
** 
** Made by remy
** Login   <remy.machado@epitech.eu@epitech.net>
** 
** Started on  Thu Nov 17 18:48:59 2016 remy
** Last update Thu Nov 17 22:24:12 2016 remy
*/

#include <stdarg.h>
#include "my_printf.h"

int		format_mod(const char *str, int *i, char mod, va_list ap)
{
  int		j;
  va_list	apcpy;

  j = *i;
  while (str[j] != '%')
    j--;
  while (str[j] != mod)
    {
      va_copy(apcpy, ap);
      if (str[j] != ' ')
	{
	  if (format_mod2(str, j, mod, apcpy) == 1)
	    return (0);
	}
      j++;
    }
  return (0);
}
