/*
** display.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Mon Mar  6 21:17:58 2017 jack
** Last update Mon Mar  6 23:01:18 2017 jack
*/

#include "tetris.h"
#include "my_printf.h"

int		print_edge(t_game *game)
{
  int		i;

  i = 0;
  wprintw(game->window, "+");
  while (i < game->size_x * 2)
    {
      wprintw(game->window, "-");
      i++;
    }
  wprintw(game->window, "+\n");
}

int		display_board(t_game *game)
{
  int		i;
  int		j;

  i = 4;
  print_edge(game);
  while (game->board[i])
    {
      j = 0;
      wprintw(game->window, "|");
      while (game->board[i][j] != -1)
	{
	  if (game->board[i][j] == 0)
	    wprintw(game->window, " ");
	  else
	    wprintw(game->window, "*");
	  wprintw(game->window, " ");
	  j++;
	}
      wprintw(game->window, "|\n");
      i++;
    }
  print_edge(game);
  wrefresh(game->window);
}

int		init_display(t_game *game, t_list *tetriminos)
{
  game->window = initscr();
  game->board = init_game_board(game);
  display_board(game);
  endwin();
}
