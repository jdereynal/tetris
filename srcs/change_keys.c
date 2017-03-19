/*
** change_keys.c for tetris in /home/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy machado
** Login   <remy.machado@epitech.net>
** 
** Started on  Sun Mar 19 12:57:07 2017 remy machado
** Last update Sun Mar 19 12:58:45 2017 remy machado
*/

#include "tetris.h"

#define ANY     0
#define KD      1
#define KL      2
#define KP      3
#define KQ      4
#define KR      5
#define KT      6
#define LKD     7
#define LKL     8
#define LKP     9
#define LKQ     10
#define LKR     11
#define LKT     12

int     which_long_key(char *key)
{
  if (!my_strncmp(key, "--key-drop=", 11))
    return (LKD);
  if (!my_strncmp(key, "--key-left=", 11))
    return (LKL);
  if (!my_strncmp(key, "--key-pause=", 12))
    return (LKP);
  if (!my_strncmp(key, "--key-quit=", 11))
    return (LKQ);
  if (!my_strncmp(key, "--key-right=", 12))
    return (LKR);
  if (!my_strncmp(key, "--key-turn=", 11))
    return (LKT);
  return (ANY);
}

int     which_key(char *key)
{
  if (!my_strcmp(key, "-kd"))
    return (KD);
  if (!my_strcmp(key, "-kl"))
    return (KL);
  if (!my_strcmp(key, "-kp"))
    return (KP);
  if (!my_strcmp(key, "-kq"))
    return (KQ);
  if (!my_strcmp(key, "-kr"))
    return (KR);
  if (!my_strcmp(key, "-kt"))
    return (KT);
  if (which_long_key(key) != 0)
    return (which_long_key(key));
  return (ANY);
}

int     index_my_key(int i, int *index_key, char **argv)
{
  if (((*index_key = which_key(argv[i])) > 0) &&
      (argv[i + 1] == NULL))
    return (RET_FAIL);
  if (((*index_key = which_key(argv[i])) == 0) &&
      (argv[i + 1] == NULL))
    return (-1);
  if (((*index_key = which_key(argv[i])) == 0) &&
      (argv[i + 1] != NULL))
    return (-1);
  else
    return (RET_SUCCESS);
}

int     change_keys_2(char **argv, t_key_binding *keys,
		      int *index_key, int *i)
{
  int   index_key_2;

  if (index_my_key(*i, index_key, argv) == RET_FAIL)
    return (RET_FAIL);
  else if (index_my_key(*i, index_key, argv) == (-1))
    {
      *i = *i + 1;
      return (RET_SUCCESS);
    }
  index_key_2 = which_key(argv[*i + 1]);
  if ((*index_key > 0) && (index_key_2 > 0))
    attribute_unknown_seq((*index_key - 1), argv[*i + 1], keys);
  else if ((*index_key > 0) && ((index_key_2 = which_key(argv[*i + 1]) == 0)))
    attribute_unknown_seq((*index_key - 1), argv[*i + 1], keys);
  *i += 2;
  return (RET_SUCCESS);
}

int     change_keys(char **argv, t_key_binding *keys)
{
  int   i;
  int   index_key;
  int   index_key_2;

  i = 1;
  while (argv[i] != NULL)
    {
      index_key = which_key(argv[i]);
      if ((index_key > 6) && ((index_key == LKP) || (index_key == LKR)))
	{
	  attribute_unknown_seq((index_key - 7), (argv[i] + 12), keys);
	  ++i;
	  continue ;
	}
      if (index_key > 6)
	{
	  attribute_unknown_seq((index_key - 7), (argv[i] + 11), keys);
	  ++i;
	  continue ;
	}
      if (change_keys_2(argv, keys, &index_key, &i) == RET_FAIL)
	return (RET_FAIL);
    }
  return (RET_SUCCESS);
}
