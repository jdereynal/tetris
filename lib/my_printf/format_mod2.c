/*
** format_mod2.c for my_printf in /home/remy/blinux/remy.machado/PSU_2016_my_printf
** 
** Made by remy
** Login   <remy.machado@epitech.eu@epitech.net>
** 
** Started on  Sun Nov 20 20:17:31 2016 remy
** Last update Sun Nov 20 20:19:58 2016 remy
*/

#include <stdarg.h>
#include "my_printf.h"

int	format_mod2(const char *str, int j, char mod, va_list apcpy)
{
  if (str[j] == '+')
    if (!my_nbr_isneg_ap(apcpy))
      my_putchar('+');
  if (str[j] == '#')
    format_sharp(mod);
  else if (my_zero_isfirst(str + j, mod))
    {
      format_zero(str, j, mod, apcpy);
      return (1);
    }
  if (my_char_isnum(str[j]) && (str[j] != '0'))
    {
      format_leftj(str, j, mod, apcpy);
      return (1);
    }
  return (1);
}
