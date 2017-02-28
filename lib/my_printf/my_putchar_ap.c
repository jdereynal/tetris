/*
** my_putchar_ap.c for my_printf in /home/remy/blinux/remy.machado/PSU_2016_my_printf
** 
** Made by remy
** Login   <remy.machado@epitech.eu@epitech.net>
** 
** Started on  Wed Nov 16 21:45:46 2016 remy
** Last update Thu Nov 17 16:29:05 2016 remy
*/

#include <unistd.h>
#include <stdarg.h>

void	my_putchar_ap(va_list ap)
{
  char	c;

  c = (char)va_arg(ap, int);
  write(1, &c, 1);
}
