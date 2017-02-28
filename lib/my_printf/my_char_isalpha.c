/*
** my_char_isalpha.c for my_char_isalpha in /home/remy.machado/Pool_Second_Try/lib/my
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Fri Oct 21 19:15:45 2016 remy machado
** Last update Sun Oct 23 11:48:20 2016 remy machado
*/

#include "my_printf.h"

int	my_char_isalpha(char c)
{
  if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
    return (1);
  else
    return (0);
}
