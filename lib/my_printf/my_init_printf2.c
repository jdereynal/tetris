/*
** my_init_printf2.c for my_printf in /home/remy/blinux/remy.machado/PSU_2016_my_printf
** 
** Made by remy
** Login   <remy.machado@epitech.eu@epitech.net>
** 
** Started on  Thu Nov 17 15:44:31 2016 remy
** Last update Thu Nov 17 22:01:52 2016 remy
*/

#include <stdarg.h>
#include "my_printf.h"

char    my_init_printf2(const char *str, int *i, int *stop, va_list ap)
{
  char	mod;

  *i = (*i + 1);
  while (str[*i] == ' ')
    {
      *i = (*i + 1);
    }
  while (!identify_mod(str[*i]))
    {
      if (str[*i] == '\0')
	{
	  *stop = 1;
	  return (0);
	}
      (*i = *i + 1);
    }
  mod = str[*i];
  format_mod(str, i, mod, ap);
  *i = (*i + 1);
  return (mod);
}
