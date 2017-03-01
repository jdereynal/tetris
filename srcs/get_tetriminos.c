/*
** get_tetrimino.c for tetris in /home/jack/rendu/tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Sun Feb 26 15:31:45 2017 jack
** Last update Wed Mar  1 17:38:57 2017 jack
*/

#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "tetris.h"

int		parse_tetrimino(int fd, t_object *obj)
{
  char		*str;
  char		**tab;
  int		i;

  if ((str = get_next_line(fd)) == NULL || only_numbers(str) == false)
    {
      obj->error = 1;
      return (RET_SUCCESS);
    }
  tab = str_to_wordtab(str, ' ');
  if (my_tab_length(tab) < 3)
    return (RET_FAIL);
  obj->width = my_getnbr(tab[0]);
  obj->height = my_getnbr(tab[1]);
  obj->color = my_getnbr(tab[2]);
  if ((obj->shape = malloc(sizeof(char *) * (obj->height + 1))) == NULL)
    return (RET_FAIL);
  i = 0;
  while ((str = get_next_line(fd)) != NULL)
    {
      obj->shape[i++] = my_strdup(str);
      free(str);
    }
  obj->shape[i] = 0;
  obj->error = 0;
  return (RET_SUCCESS);
}

int		parse_file(char *name, char *folder, t_object *obj)
{
  int		fd;
  char		*str;

  if ((fd = open(concatenate(concatenate(folder, "/"), name), O_RDONLY)) < 0)
    return (RET_FAIL);
  str = my_strdup(name);
  str[my_strlen(str) - 10] = '\0';
  if ((obj->name = my_strdup(str)) == NULL)
    return (RET_FAIL);
  free(str);
  return (parse_tetrimino(fd, obj));
}

int		read_directory(char *path, t_list *my_list)
{
  DIR		*dir;
  struct dirent	*res;
  t_object	obj;

  if ((dir = opendir(path)) == NULL)
    return (RET_FAIL);
  while ((res = readdir(dir)) != NULL)
    {
      if (extension(res->d_name, ".tetrimino"))
	{
	  if (parse_file(res->d_name, path, &obj) == RET_SUCCESS)
	    add_elem_to_list(obj, my_list);
	}
    }
  return (RET_SUCCESS);
}

t_list		*get_tetriminos(char *path)
{
  t_list	*my_list;

  if ((my_list = init_list()) == NULL)
    return (NULL);
  if ((read_directory(path, my_list)) == RET_FAIL)
    return (NULL);
  return (my_list);
}
