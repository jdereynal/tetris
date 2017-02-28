/*
** gnl.c for \ in /home/jack/rendu/getnextline
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Mon Jan  2 14:15:06 2017 jack
** Last update Sun Feb 26 21:14:56 2017 jack
*/

#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

int		check_for_char(char *str, char c)
{
  int		i;

  i = 0;
  if (str == NULL)
    return (0);
  while (str[i] != '\0')
    {
      if (str[i] == c)
	return (1);
      i++;
    }
  return (0);
}

char			*concat(char *str1, char *str2)
{
  int			i;
  int			j;
  char			*result;

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
  free(str1);
  return (result);
}

char		*get_line(char **str)
{
  int		i;
  static int	k;
  char		*result;
  char		*rest;

  if ((result = malloc(sizeof(char) * my_strlen(str[0]))) == NULL)
    return (NULL);
  i = 0;
  while (str[0][i])
    {
      if (str[0][i] == '\n')
	{
	  rest = my_strdup(&str[0][i + 1]);
	  free(str[0]);
	  str[0] = rest;
	  result[i] = '\0';
	  return (result);
	}
      result[i] = str[0][i++];
    }
  if (k == 1 || str[0][0] == '\0')
    return (NULL);
  k = 1;
  return (str[0]);
}

char		 *get_next_line(int fd)
{
  static char	*str;
  char		buffer[READ_SIZE + 1];
  int		len;

  len = 1;
  if (str == NULL)
    {
      if ((str = malloc(sizeof(char))) == NULL)
	return (NULL);
      str[0] = '\0';
    }
  while (!(check_for_char(str, '\n')) && len != 0)
    {
      len = read(fd, buffer, READ_SIZE);
      buffer[len] = '\0';
      str = concat(str, buffer);
    }
  return (get_line(&str));
}
