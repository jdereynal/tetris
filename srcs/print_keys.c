
/*
** print_keys.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Wed Mar  1 15:24:10 2017 jack
** Last update Wed Mar  1 16:18:52 2017 jack
*/

#include "tetris.h"
#include "my_printf.h"

int	my_putstr_escape(char *str)
{
  int	i;

  i = 0;
  while (str[i])
   {
    if (str[i] == 27)
      my_printf("^E");
    else if (str[i] == ' ')
      my_printf("(space)");
    else
      my_printf("%c", str[i]);
    i++;
   }
  my_printf("\n");
  return (0);
}

int   print_keys(t_key_binding *keys)
{
  my_printf("Key Left : ");
  my_putstr_escape(keys->key_left);
  my_printf("Key Right : ");
  my_putstr_escape(keys->key_right);
  my_printf("Key Turn : ");
  my_putstr_escape(keys->key_turn);
  my_printf("Key Drop : ");
  my_putstr_escape(keys->key_drop);
  my_printf("Key Quit : ");
  my_putstr_escape(keys->key_quit);
  my_printf("Key Pause : ");
  my_putstr_escape(keys->key_pause);
}
