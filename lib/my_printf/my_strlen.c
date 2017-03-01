/*
** my_strlen.c for my_strlen in /home/remy.machado/Pool_Second_Try/CPool_Day04
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Wed Oct 19 20:12:15 2016 remy machado
** Last update Sun Oct 23 11:58:16 2016 remy machado
*/

#include "my_printf.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
