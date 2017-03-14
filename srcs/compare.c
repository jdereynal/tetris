/*
** compare.c for  in /home/jack/rendu/PSU_2016_minishell1
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Fri Jan 13 15:33:46 2017 jack
** Last update Tue Mar 14 15:05:10 2017 jack
*/

#include "tetris.h"

int	compare(char *str1, char *str2)
{
  int	i;

  i = 0;
  if (my_strlen(str1) != my_strlen(str2))
    return (0);
  while (str1[i] != '\0')
    {
      if (str1[i] != str2[i])
  	return (0);
      i++;
    }
  return (1);
}

int	ncompare(char *str1, char *str2, int n)
{
  int	i;

  i = 0;
  while (str1[i] && str2[i] && (str1[i] == str2[i]) && i < n)
    i++;
  if (str1[i] && str2[i] && str1[i] == str2[i])
    return (1);
  return (0);
}
