/*
** my_putnbr_base.c for my_putnbr_base in /home/remy.machado/Pool_Second_Try/lib/my
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Sun Nov 13 11:27:16 2016 remy machado
** Last update Sun Nov 13 21:56:37 2016 remy machado
*/

#include "my_printf.h"

int	my_putnbr_base(long nbr, char *base)
{
  int	decbase;

  decbase = my_strlen(base);
  if (nbr < 0)
    {
      my_putchar('-');
      nbr *= (-1);
    }
  if (nbr >= decbase)
    {
      my_putnbr_base((nbr / decbase), base);
      my_putchar(base[nbr % decbase]);
    }
  if (nbr < decbase)
    {
      my_putchar(base[nbr]);
    }
  return (0);
}
