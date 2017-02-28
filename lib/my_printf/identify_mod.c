/*
** identify_mod.c for my_printf in /home/remy.machado/PSU_2016_my_printf
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Fri Nov 11 16:55:03 2016 remy machado
** Last update Sun Nov 13 22:11:20 2016 remy machado
*/

char	identify_mod(char c)
{
  if ((c == '%') ||
      (c == 'd') ||
      (c == 'i') ||
      (c == 'o') ||
      (c == 'x') ||
      (c == 'X') ||
      (c == 'p') ||
      (c == 'c') ||
      (c == 's') ||
      (c == 'S') ||
      (c == 'u') ||
      (c == 'b'))
    return (c);
  else
    return (0);
}
