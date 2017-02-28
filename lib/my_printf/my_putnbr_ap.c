/*
** my_putnbr_ap.c for my_printf in /home/remy/blinux/remy.machado/PSU_2016_my_printf
** 
** Made by remy
** Login   <remy.machado@epitech.eu@epitech.net>
** 
** Started on  Wed Nov 16 21:53:27 2016 remy
** Last update Thu Nov 17 16:29:32 2016 remy
*/

#include <stdarg.h>
#include "my_printf.h"

void    my_putnbr_ap(va_list ap)
{
  long	nbr;

  nbr = va_arg(ap, long);
  my_putnbr(nbr);
}
