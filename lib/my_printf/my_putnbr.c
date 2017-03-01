/*
** my_putnbr.c for my_putnbr in /home/remy.machado/Pool_Second_Try/lib/my
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Thu Oct 20 16:47:30 2016 remy machado
** Last update Wed Oct 26 12:22:31 2016 remy machado
*/

#include "my_printf.h"

void	my_putnbr(int nbr)
{
  if (nbr < 0)
    {
      my_putchar('-');
      nbr *= (-1);
    }
  if (nbr > 9)
    {
      my_putnbr(nbr / 10);
      my_putchar((nbr % 10) + '0');
    }
  if (nbr <= 9)
    my_putchar(nbr + '0');
}
