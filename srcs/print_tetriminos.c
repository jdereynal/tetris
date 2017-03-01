/*
** print_tetriminos.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Wed Mar  1 15:24:10 2017 jack
** Last update Wed Mar  1 16:18:52 2017 jack
*/

#include "tetris.h"
#include "my_printf.h"

int		get_tetrimino_count(t_list *my_list)
{
  int		count;
  t_list	*tmp;

  tmp = my_list->next;
  count = 0;
  while (tmp)
    {
      count++;
      tmp = tmp->next;
    }
  return (count);
}

int		print_tetriminos(t_list *my_list)
{
  t_list	*tmp;

  my_printf("Tetriminos : %d\n", get_tetrimino_count(my_list));
  tmp = my_list->next;
  while (tmp)
    {
      if (tmp->obj.error)
	my_printf("Tetriminos : Name %s : Error\n", tmp->obj.name);
      else
	{
	  my_printf("Tetriminos : Name %s : Size %d*%d : Color %d :\n",
		    tmp->obj.name, tmp->obj.width, tmp->obj.height,
		    tmp->obj.color);
	  print_tab(tmp->obj.shape);
	}
      tmp = tmp->next;
    }
  return (RET_SUCCESS);
}
