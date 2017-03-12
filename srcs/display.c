/*
** display.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Mon Mar  6 21:17:58 2017 jack
** Last update Sun Mar 12 21:00:33 2017 jack
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

int		display_board(t_game *game, t_list *tetriminos)
{
  int		i;
  int		j;

  i = 0;
  wclear(game->window);
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
  game->board = add_shape(game, tetriminos);
  keypad(game->window, TRUE);
  nodelay(game->window, 1);
  while (1)
    {
      int k = wgetch(game->window);
      if (k == KEY_RIGHT)
	game->board = move_shape_right(game);
      if (k == KEY_LEFT)
	game->board = move_shape_left(game);
      display_board(game, tetriminos);
      game->board = update_board(game);
      if (has_moving_shape(game->board) == 0)
	game->board = add_shape(game, tetriminos);
      usleep(100000);
    }
  endwin();
}
