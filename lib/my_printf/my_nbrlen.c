/*
** my_nbrlen.c for my_nbrlen in /home/remy/blinux/remy.machado/PSU_2016_my_printf
** 
** Made by remy
** Login   <remy.machado@epitech.eu@epitech.net>
** 
** Started on  Thu Nov 17 20:40:33 2016 remy
** Last update Thu Nov 17 20:47:50 2016 remy
*/

int	my_nbrlen(long nbr)
{
  int	length;

  length = 0;
  while ((nbr > 9) || (nbr < (-9)))
    {
      nbr /= 10;
      length++;
    }
  return (length + 1);
}
