/*
** my_showstr_octal.c for my_printf in /home/remy.machado/PSU_2016_my_printf
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Wed Nov 16 10:50:51 2016 remy machado
** Last update Wed Nov 16 23:12:34 2016 remy
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my_printf.h"

void     my_showstr_octal(va_list ap)
{
  int   i;
  char	*str;

  str = va_arg(ap, char *);
  i = 0;
  if (str != NULL)
    {
      while (str[i] != '\0')
	{
	  if ((str[i] <= 31) || (str[i] >= 127))
	    {
	      my_putchar('\\');
	      if ((str[i] >= 0) && (str[i] < 8))
		my_putstr("00");
	      if ((str[i] >= 8) && (str[i] <= 31))
		my_putchar('0');
	      my_putnbr_base(str[i], "01234567");
	    }
	  else
	    my_putchar(str[i]);
	  i++;
	}
    }
  else
    my_putstr("(null)");
}
