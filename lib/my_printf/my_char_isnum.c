/*
** my_char_isnum.c for my_char_isnum in /home/remy.machado/Pool_Second_Try/lib/my
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Thu Oct 20 10:59:49 2016 remy machado
** Last update Sun Oct 23 11:49:01 2016 remy machado
*/

#include "my_printf.h"

int	my_char_isnum(char c)
{
  if ((c >= '0') && (c <= '9'))
    return (1);
  else
    return (0);
}
