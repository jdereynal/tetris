/*
** my_strlen_alphanum.c for my_strlen_alphanum in /home/remy.machado/Pool_Second_Try/lib/my
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Sun Oct 23 14:07:24 2016 remy machado
** Last update Sun Oct 23 14:09:17 2016 remy machado
*/

#include "my_printf.h"

int	my_strlen_alphanum(const char *str)
{
  int	i;

  i = 0;
  while (my_char_isalphanum(str[i]))
    i++;
  return (i);
}
