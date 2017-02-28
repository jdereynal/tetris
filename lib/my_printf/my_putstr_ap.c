/*
** my_putstr_ap.c for my_printf in /home/remy/blinux/remy.machado/PSU_2016_my_printf
** 
** Made by remy
** Login   <remy.machado@epitech.eu@epitech.net>
** 
** Started on  Wed Nov 16 21:50:19 2016 remy
** Last update Thu Nov 17 16:30:36 2016 remy
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my_printf.h"

void    my_putstr_ap(va_list ap)
{
  int   i;
  char	*str;

  i = 0;
  str = va_arg(ap, char *);
  if (str != NULL)
    while (str[i] != '\0')
      {
	my_putchar(str[i]);
	i++;
      }
  else
    my_putstr("(null)");
}
