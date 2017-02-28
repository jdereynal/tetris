/*
** my_printf_core.c for my_printf in /home/remy.machado/PSU_2016_my_printf
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Sun Nov 13 20:09:01 2016 remy machado
** Last update Thu Feb 16 17:23:05 2017 remy
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my_printf.h"

t_ptrf	tabf[12] = {my_putnbr_base_b,
		    my_putchar_ap,
		    my_putnbr_ap,
		    my_putnbr_ap,
		    my_putnbr_base_o,
		    my_putnbr_base_p,
		    my_putstr_ap,
		    my_showstr_octal,
		    my_putnbr_ap,
		    my_putnbr_base_x,
		    my_putnbr_base_X,
		    my_putchar_mod};

int		my_printf_core(const char *str, int *i, int *stop, va_list ap)
{
  int		j;
  char		mod;
  char		*str2;

  str2 = malloc(sizeof(char) * 13);
  str2 = my_strcpy(str2, "bcdiopsSuxX%");
  str2[12] = '\0';
  while (!*stop)
    {
      mod = my_init_printf(str, i, stop, ap);
      j = 0;
      while (str2[j] != '\0')
	{
	  if (str2[j] == mod)
	    {
	      tabf[j](ap);
	    }
	  j++;
	}
    }
  free(str2);
  return (0);
}
