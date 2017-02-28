/*
** my_putnbr_base_p.c for my_printf in /home/remy/blinux/remy.machado/PSU_2016_my_printf
** 
** Made by remy
** Login   <remy.machado@epitech.eu@epitech.net>
** 
** Started on  Wed Nov 16 21:57:52 2016 remy
** Last update Wed Nov 16 21:59:32 2016 remy
*/

#include <stdarg.h>
#include "my_printf.h"

void     my_putnbr_base_p(va_list ap)
{
  long	adress;

  my_putstr("0x");
  adress = va_arg(ap, long);
  my_putnbr_base(adress, "0123456789abcdef");
}

