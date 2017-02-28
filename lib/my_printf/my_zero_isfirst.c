/*
** my_zero_isfirst.c for my_printf in /home/remy/blinux/remy.machado/PSU_2016_my_printf
** 
** Made by remy
** Login   <remy.machado@epitech.eu@epitech.net>
** 
** Started on  Sun Nov 20 15:37:02 2016 remy
** Last update Sun Nov 20 15:52:39 2016 remy
*/

#include "my_printf.h"

int	my_zero_isfirst(const char *str, char mod)
{
  int	i;

  i = 0;
  while (str[i] != mod)
    {
      if (!my_char_isnum(str[i - 1]) && (str[i] == '0') &&
	  (my_char_isnum(str[i + 1])))
	return (1);
      i++;
    }
  return (0);
}
