/*
** display.c for tetris in /home/jack/rendu/psu/PSU_2016_tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Mon Mar  6 21:17:58 2017 jack
** Last update Wed Mar 15 12:41:42 2017 jack
*/

#include <unistd.h>
#include <time.h>
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
  wclear(game->window);
  print_edge(game);
  while (game->board[i])
    {
      j = 0;
      print_char(game->window, "|", 1);
      while (game->board[i][j] != -1)
	{
	  if (game->board[i][j] == 0)
	    print_char(game->window, " ", 1);
	  else
	    print_char(game->window, TETRI_CHAR, game->board[i][j]);
	  wprintw(game->window, " ");
	  j++;
	}
      print_char(game->window, "|\n", 1);
      i++;
    }
  print_edge(game);
  wrefresh(game->window);
}

int		game_loop(t_time times, t_game *game, t_list *tetriminos)
{
  int		k;
  char		buffer[1];

  while (1)
    {
      times.end = clock();
      k = read(1, buffer, 1);
      game->board = remove_lines(game);
      if (k > 0)
	handle_read(buffer, game);
      if (times.start - times.end < -400000 + 15000 * game->level)
	{
	  times.start = clock();
	  display_board(game);
	  game->board = update_board(game);
	}
      if (has_moving_shape(game->board) == 0)
	game->board = add_shape(game, tetriminos);
    }
}

int		init_display(t_game *game, t_list *tetriminos)
{
  t_time	times;

  srand(time(NULL));
  game->window = initscr();
  game->board = init_game_board(game);
  game->board = add_shape(game, tetriminos);
  keypad(game->window, TRUE);
  prepare_read();
  times.start = clock();
  game_loop(times, game, tetriminos);
  endwin();
}
