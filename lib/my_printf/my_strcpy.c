/*
** my_strcpy.c for my_strcpy in /home/remy.machado/CPool_Day06
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Mon Oct 10 11:01:13 2016 remy machado
** Last update Tue Oct 11 14:30:50 2016 remy machado
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  return (dest);
}
