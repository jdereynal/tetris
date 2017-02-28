/*
** format_zero.c for my_printf in /home/remy/blinux/remy.machado/PSU_2016_my_printf
** 
** Made by remy
** Login   <remy.machado@epitech.eu@epitech.net>
** 
** Started on  Thu Nov 17 20:38:57 2016 remy
** Last update Fri Nov 18 12:06:50 2016 remy
*/

#include <stdarg.h>
#include "my_printf.h"

int	format_zero(const char *str, int j, char mod, va_list apcpy)
{
  int	zeros;
  int	i;
  int	lengthstr;

  i = 0;
  format_zero2(&lengthstr, mod, apcpy);
  zeros = my_getnbr(str + j);
  if (zeros > lengthstr)
    {
      i = (zeros - lengthstr);
      while  (i != 0)
	{
	  my_putchar('0');
	  i--;
	}
    }
  return (0);
}
