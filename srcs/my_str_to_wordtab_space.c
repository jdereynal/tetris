/*
** my_str_to_wordtab_space.c for minishell1 in /home/remy/blinux/remy.machado/PSU_2016_my_exec/srcs
**
** Made by remy
** Login   <remy.machado@epitech.eu@epitech.net>
**
** Started on  Wed Jan 18 16:21:48 2017 remy
** Last update Wed Mar  1 15:08:38 2017 jack
*/

#include <stdlib.h>

int	my_strlen_space(char *str)
{
  int	i;

  i = 0;
  while ((str[i] != ' ') && (str[i] != '\0'))
    ++i;
  return (i);
}

int     my_words_counter_space(char *str)
{
  int   i;
  int   counter;

  i = 0;
  counter = 0;
  while (str[i] != '\0')
    {
      if (str[i] != ' ')
	{
	  while ((str[i] != ' ') && (str[i] != '\0'))
	    i++;
	  counter++;
	}
      else
	i++;
    }
  return (counter);
}

char	**my_str_to_wordtab_space2(char *str, int i, int j, int k)
{
  char  **tab;

  tab = malloc(sizeof(char *) * (my_words_counter_space(str) + 1));
  if (tab == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      if ((str[i] != ' ') && (str[i] != '\0'))
	{
	  tab[j] = malloc(sizeof(char) * my_strlen_space(str + i));
	  if (tab[j] == NULL)
	    return (NULL);
	  while ((str[i] != ' ') && (str[i] != '\0'))
	    {
	      tab[j][k] = str[i++];
	      k++;
	    }
	  tab[j++][k] = '\0';
	  k = 0;
	}
      else
	i++;
    }
  tab[my_words_counter_space(str)] = 0;
  return (tab);
}

char	**my_str_to_wordtab_space(char *str)
{
  int   i;
  int   j;
  int   k;

  i = 0;
  j = 0;
  k = 0;
  return (my_str_to_wordtab_space2(str, i, j, k));
}
