/*
** my_init_printf.c for my_printf in /home/remy.machado/PSU_2016_my_printf
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Fri Nov 11 19:28:29 2016 remy machado
** Last update Thu Nov 17 16:20:24 2016 remy
*/

#include <stdarg.h>
#include "my_printf.h"

char	my_init_printf(const char *str, int *i, int *stop, va_list ap)
{
  while (str[*i] != '\0')
    {
      if (str[*i] != '%')
	my_putchar(str[*i]);
      else
	{
	  return (my_init_printf2(str, i, stop, ap));
	}
      *i = (*i + 1);
    }
  *stop = 1;
  return (0);
}
