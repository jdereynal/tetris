/*
** my_putstr.c for my_putstr in /home/remy.machado/Pool_Second_Try/CPool_Day04
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Wed Oct 19 20:01:42 2016 remy machado
** Last update Sun Oct 23 11:53:39 2016 remy machado
*/

#include "my_printf.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
