/*
** help_flag.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Tue Feb 28 17:23:43 2017 remy
** Last update Tue Feb 28 21:16:38 2017 remy
*/

#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "gnl.h"
#include "my_printf.h"
#include "tetris.h"

int	help_flag(void)
{
  char	*next_line = NULL;
  int	fd;
  
  if ((fd = open(HELP_FILENAME, O_RDONLY)) == (-1))
    return (RET_FAIL);
  while ((next_line = get_next_line(fd)) != NULL)
    {
      my_printf("%s\n", next_line);
      free(next_line);
    }
  return (RET_SUCCESS);
}
