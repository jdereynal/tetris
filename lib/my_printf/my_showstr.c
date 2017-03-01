/*
** my_showstr.c for my_showstr in /home/remy.machado/Pool_Second_Try/lib/my
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Sun Nov 13 17:23:26 2016 remy machado
** Last update Wed Nov 16 10:50:16 2016 remy machado
*/

#include "my_printf.h"

int	my_showstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] <= 31) || (str[i] >= 127))
	{
	  my_putchar('\\');
	  my_putnbr_base(str[i], "0123456789abcdef");
	}
      else
	my_putchar(str[i]);
      i++;
    }
  return (0);
}
