/*
** my_getnbr.c for my_getnbr in /home/remy.machado/Pool_Second_Try/CPool_Day04
**
** Made by remy machado
** Login   <remy.machado@epitech.net>
**
** Started on  Thu Oct 20 10:46:41 2016 remy machado
** Last update Wed Mar  1 17:04:24 2017 jack
*/

#include <stdbool.h>
#include <stdlib.h>
#include "my_printf.h"

int	const_strlen(const char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (0);
  while (str[i] != '\0')
    ++i;
  return (i);
}

int	my_getnbr_part_2(const char *nbr, int index, bool is_neg)
{
  int	i;
  int	pow;
  int	sum;

  i = index;
  while (i != 0)
    {
      if (!my_char_isnum(nbr[i]))
	index = i - 1;
      --i;
    }
  pow = 1;
  sum = 0;
  while (index >= 0)
    {
      sum += (pow * (nbr[index] - '0'));
      pow *= 10;
      --index;
    }
  if (is_neg == true)
    sum *= (-1);
  return (sum);
}

int     my_getnbr(const char *nbr)
{
  int	i;
  int   index;
  bool  is_neg;

  i = 0;
  is_neg = false;
  while (!my_char_isnum(nbr[i]))
    ++i;
  if (nbr[i - 1] == '-')
    is_neg = true;
  nbr += i;
  index = (const_strlen(nbr) - 1);
  return (my_getnbr_part_2(nbr, index, is_neg));
}
