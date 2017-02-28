/*
** my_putchar.c for my_putchar in /home/remy.machado/Pool_Second_Try/CPool_Day04/tests
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Wed Oct 19 18:46:28 2016 remy machado
** Last update Sun Oct 23 12:07:01 2016 remy machado
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
