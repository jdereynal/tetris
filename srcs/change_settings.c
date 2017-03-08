/*
** change_settings.c for  in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Tue Mar  7 15:39:24 2017 remy
** Last update Wed Mar  8 15:28:05 2017 remy
*/

#include "my_printf.h"
#include "tetris.h"

int	str_gotcomma(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == ',')
	return (i);
      ++i;
    }
  return (0);
}

int	change_map_size_settings(char *arg, t_game *game)
{
  int	tmp;
  char	*cpy;

  if ((cpy = my_strdup(arg)) == NULL)
    return (RET_FAIL);
  if (!my_strncmp(arg, "--map-size=", 11) && !str_gotcomma(arg + 11))
    {
      free(cpy);
      return (RET_FAIL);
    }
  if (!my_strncmp(arg, "--map-size=", 11) &&
      my_str_isnum(arg +  str_gotcomma(arg) + 1))
    {
      tmp = my_getnbr(arg + str_gotcomma(arg) + 1);
      cpy[str_gotcomma(arg)] = '\0';
      if (my_str_isnum(cpy + 11))
	{
	  game->size_x = my_getnbr(cpy + 11);
	  game->size_y = my_getnbr(arg + str_gotcomma(arg) + 1);
	}
    }
  free(cpy);
  return (RET_SUCCESS);
}

int	change_settings(char **argv, t_game *game)
{
  int	i;

  i = 1;
  while (argv[i] != NULL)
    {
      if (!my_strcmp(argv[i], "-w") || !my_strcmp(argv[i], "--without-next"))
	game->hide_next = true;
      if (!my_strcmp(argv[i], "-l") &&
	  ((argv[i + 1] == NULL) || !my_str_isnum(argv[i + 1])))
	return (RET_FAIL);
      else if (!my_strcmp(argv[i], "-l") &&
	  ((argv[i + 1] != NULL) || my_str_isnum(argv[i + 1])))
	game->level = my_getnbr(argv[i + 1]);
      if (!my_strncmp(argv[i], "--level=", 8) && !my_str_isnum(argv[i] + 8))
	return (RET_FAIL);
      else if (!my_strncmp(argv[i], "--level=", 8) && my_str_isnum(argv[i] + 8))
	game->level = my_getnbr(argv[i] + 8);
      if (!my_strncmp(argv[i], "--map-size=", 11) &&
	  change_map_size_settings(argv[i], game) == RET_FAIL)
	return (RET_FAIL);
      ++i;
    }
  return (RET_SUCCESS);
}
