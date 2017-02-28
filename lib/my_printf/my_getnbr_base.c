/*
** my_getnbr_base.c for my_getnbr_base in /home/remy.machado/Pool_Second_Try/lib/my
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Sun Nov 13 14:57:10 2016 remy machado
** Last update Sun Nov 13 17:07:57 2016 remy machado
*/

#include "my_printf.h"

void	init_getnbr_base(int *i, int *sum, int *decbase, char *base)
{
  *i = 0;
  *sum = 0;
  *decbase = my_strlen(base);
}

int	index_getnbr_base(char *str, int j, char *base, int *index)
{
  while (str[j] != base[*index])
    {
      if (*index > 36)
	return (0);
      *index = *index + 1;
    }
  return (0);
}

int	sum_getnbr_base(int index, int  decbase, int *j, int *k)
{
  int	sum;

  sum = (index * my_power_it(decbase, *k));
  *j = (*j + 1);
  *k = (*k - 1);
  return (sum);
}

int	my_getnbr_base(char *str, char *base)
{
  int   sum;
  int   i;
  int   j;
  int   length;
  int   k;
  int	decbase;
  int	index;

  init_getnbr_base(&i, &sum, &decbase, base);
  while (!my_char_isalphanum(str[i]))
    i++;
  j = i;
  length = my_strlen_alphanum(str + i);
  k = length - 1;
  while (str[j] != str[i + length])
    {
      index = 0;
      index_getnbr_base(str, j, base, &index);
      sum = sum + sum_getnbr_base(index, decbase, &j, &k);
    }
  if (str[i - 1] == '-')
    sum *= (-1);
  return (sum);
}
