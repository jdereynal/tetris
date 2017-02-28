/*
** my_nbr_isneg_ap.c for my_printf in /home/remy/blinux/remy.machado/PSU_2016_my_printf
** 
** Made by remy
** Login   <remy.machado@epitech.eu@epitech.net>
** 
** Started on  Sun Nov 20 18:07:58 2016 remy
** Last update Sun Nov 20 18:10:21 2016 remy
*/

#include <stdarg.h>
#include "my_printf.h"

int	my_nbr_isneg_ap(va_list apcpy)
{
  int	nbr;

  nbr = va_arg(apcpy, int);
  if (nbr >= 0)
    return (0);
  else
    return (1);
}
