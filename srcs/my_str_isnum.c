/*
** my_str_isnum.c for my_str_isnum in /home/remy.machado/Pool_Second_Try/lib/my
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Fri Oct 21 20:32:20 2016 remy machado
** Last update Tue Mar  7 17:59:55 2017 remy
*/

#include "my_printf.h"

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  if (str == 0)
    return (0);
  while (str[i] != '\0')
    {
      if (!my_char_isnum(str[i]))
	return (0);
      else
	i++;
    }
  if (i == 0)
    return (0);
  return (1);
}
