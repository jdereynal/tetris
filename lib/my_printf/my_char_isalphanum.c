/*
** my_char_isalphanum.c for my_char_isalphanum in /home/remy.machado/Pool_Second_Try/lib/my
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Fri Oct 21 20:05:53 2016 remy machado
** Last update Sun Oct 23 11:48:34 2016 remy machado
*/

#include "my_printf.h"

int	my_char_isalphanum(char c)
{
  if (my_char_isalpha(c) || my_char_isnum(c))
    return (1);
  else
    return (0);
}
