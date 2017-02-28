/*
** my_power_it.c for my_power_it in /home/remy.machado/CPool_Day03
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Wed Oct 19 13:02:36 2016 remy machado
** Last update Sun Oct 23 11:52:46 2016 remy machado
*/

#include "my_printf.h"

int	my_power_it(int nbr, int power)
{
  int	i;
  int	result;

  i = 0;
  result = 1;
  if (power == 0)
      return (1);
  else if (power < 0)
      return (0);
  else
    {
      while (i != power)
	{
	  result *= nbr;
	  i++;
	}
      return (result);
    }
}
