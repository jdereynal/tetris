/*
** my_putnbr_base_o.c for my_printf in /home/remy/blinux/remy.machado/PSU_2016_my_printf
** 
** Made by remy
** Login   <remy.machado@epitech.eu@epitech.net>
** 
** Started on  Wed Nov 16 21:40:43 2016 remy
** Last update Wed Nov 16 21:41:27 2016 remy
*/

#include <stdarg.h>
#include "my_printf.h"

void     my_putnbr_base_o(va_list ap)
{
  long  nbr;

  nbr = va_arg(ap, long);
  my_putnbr_base(nbr, "01234567");
}

