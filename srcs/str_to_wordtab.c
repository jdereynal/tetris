/*
** str_to_wordtab.c for  in /home/jack/rendu/PSU_2016_minishell1
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Fri Jan 13 16:02:38 2017 jack
** Last update Wed Mar  1 17:43:02 2017 jack
*/

#include <stdlib.h>
#include "tetris.h"

char	*get_word(char **str, char delimiter)
{
  int	i;
  int	k;
  char	*result;
  char	*rest;

  if ((result = malloc(sizeof(char) * (my_strlen(str[0]) + 1))) == NULL)
    return (NULL);
  if ((rest = malloc(sizeof(char) * (my_strlen(*str) + 1))) == NULL)
    return (NULL);
  i = 0;
  while (str[0][i] != delimiter && str[0][i] != '\0')
    result[i] = str[0][i++];
  result[i] = '\0';
  if (str[0][i] != '\0')
    i++;
  k = 0;
  while (str[0][i] == delimiter)
    i++;
  while (str[0][i] != '\0')
    rest[k++] = str[0][i++];
  rest[k] = '\0';
  str[0] = rest;
  return (result);
}

int	get_word_count(char *str, char delimiter)
{
  int	i;
  int	length;
  int	word_count;

  i = 0;
  word_count = 0;
  length = my_strlen(str);
  while (str[i] != '\0')
    {
      if (str[i] != delimiter && str[i] != '\0' && i < length)
      	{
      	  word_count++;
      	  while (str[i] != '\0' && str[i] != delimiter && i < length)
      	    i++;
      	}
      if (str[i] != '\0')
	i++;
    }
  return (word_count);
}

char	**str_to_wordtab(char *str, char delimiter)
{
  char	**result;
  int	i;
  int	j;

  i = 0;
  j = get_word_count(str, delimiter);
  if ((result = malloc(sizeof(char *) * (j + 1))) == NULL)
    return (NULL);
  while (i < j)
    {
      result[i] = get_word(&str, delimiter);
      i++;
    }
  result[i] = 0;
  return (result);
}
