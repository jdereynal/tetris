/*
** my_strcmp.c for my_strcmp in /home/remy.machado/Pool_Second_Try/lib/my
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Fri Oct 21 19:06:15 2016 remy machado
** Last update Tue Feb 28 17:19:08 2017 remy
*/

int	my_strcmp(char *str1, char *str2)
{
  int	i;

  i = 0;
  while ((str1[i] != '\0') && (str2[i] != '\0'))
    {
      if ((str1[i] - str2[i]) != 0)
	return (str1[i] - str2[i]);
      i++;
    }
  if ((str1[i] != '\0') || (str2[i] != '\0'))
    return (str1[i] - str2[i]);
  return (0);
}