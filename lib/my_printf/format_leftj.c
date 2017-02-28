/*
** format_leftj.c for my_printf in /home/remy/blinux/remy.machado/PSU_2016_my_printf
** 
** Made by remy
** Login   <remy.machado@epitech.eu@epitech.net>
** 
** Started on  Sun Nov 20 19:21:05 2016 remy
** Last update Sun Nov 20 19:28:43 2016 remy
*/

#include <stdarg.h>
#include "my_printf.h"

int	format_leftj(const char *str, int j, char mod, va_list apcpy)
{
  int   spaces;
  int   i;
  int   lengthstr;

  i = 0;
  format_leftj2(&lengthstr, mod, apcpy);
  spaces = my_getnbr(str + j);
  if (spaces > lengthstr)
    {
      i = (spaces - lengthstr);
      while  (i != 0)
	{
	  my_putchar(' ');
	  i--;
	}
    }
  return (0);
}
