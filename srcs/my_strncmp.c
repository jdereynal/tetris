/*
** my_strncmp.c for my_strncmp in /home/remy.machado/Pool_Second_Try/lib/my
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Sat Oct 22 16:55:38 2016 remy machado
** Last update Tue Mar  7 16:56:49 2017 remy
*/

int	my_strncmp(char *str1, char *str2, int n)
{
  int	i;

  i = 0;
  while ((i != n) && ((str1[i] != '\0') || (str2[i] != '\0')))
    {
      if ((str1[i] - str2[i]) != 0)
	return (str1[i] - str2[i]);
      i++;
    }
  return (0);
}
