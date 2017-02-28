/*
** format_leftj2.c for my_printf in /home/remy/blinux/remy.machado/PSU_2016_my_printf
** 
** Made by remy
** Login   <remy.machado@epitech.eu@epitech.net>
** 
** Started on  Sun Nov 20 19:29:16 2016 remy
** Last update Sun Nov 20 19:29:57 2016 remy
*/

#include <stdarg.h>
#include "my_printf.h"

int     format_leftj2(int *lengthstr, char mod, va_list apcpy)
{
  *lengthstr = 0;
  if ((mod == 's') || (mod == 'S'))
    *lengthstr = my_strlen(va_arg(apcpy, char *));
  else if ((mod == 'b') || (mod == 'd') || (mod == 'i') ||
	   (mod == 'o') || (mod == 'p') ||
	   (mod == 'x') || (mod == 'X'))
    *lengthstr = my_nbrlen(va_arg(apcpy, long));
  else if (mod == 'c')
    *lengthstr = 1;
  return (0);
}
