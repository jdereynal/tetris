/*
** concat.c for  in /home/jack/rendu/PSU_2016_minishell1
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Tue Jan 17 15:15:51 2017 jack
** Last update Mon Feb 27 17:28:52 2017 jack
*/

#include <stdlib.h>

int	my_strlen(char *);

char	*concatenate(char *str1, char *str2)
{
  int	i;
  int	j;
  char	*result;

  if (str1 == NULL)
    {
      if ((result = malloc(sizeof(char) * my_strlen(str2))) == NULL)
	return (NULL);
      i = 0;
      while (str2[i])
	result[i] = str2[i++];
      return (result);
    }
  j = my_strlen(str1) + my_strlen(str2);
  if ((result = malloc(sizeof(char) * (j + 1))) == NULL)
    return (NULL);
  i = 0;
  while (str1[i])
    result[i] = str1[i++];
  j = 0;
  while (str2[j])
    result[i + j] = str2[j++];
  result[i + j] = '\0';
  return (result);
}
