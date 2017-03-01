/*
** my_strlen_num.c for my_strlen_num in /home/remy.machado/Pool_Second_Try/lib/my
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Thu Oct 20 11:17:30 2016 remy machado
** Last update Sun Oct 23 11:58:27 2016 remy machado
*/

#include "my_printf.h"

int	my_strlen_num(const char *str)
{
  int	i;

  i = 0;
  while (my_char_isnum(str[i]))
    {
      i++;
    }
  return (i);
}
