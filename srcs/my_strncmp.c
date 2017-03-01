/*
** my_strncmp.c for my_strncmp in /home/remy.machado/Pool_Second_Try/lib/my
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Sat Oct 22 16:55:38 2016 remy machado
** Last update Wed Mar  1 20:06:44 2017 remy
*/

#include "my_printf.h"

int	my_strncmp(char *str1, char *str2, int n)
{
  int	i;
  int	length;

  i = 0;
  length = my_strlen(str1);
  if (my_strlen(str1) > my_strlen(str2))
    length = my_strlen(str2);
  if (n > length)
    n = length;
  while (i != (n + 1))
    {
      if ((str1[i] - str2[i]) != 0)
	return (str1[i] - str2[i]);
      i++;
    }
  return (0);
}
