/*
** change_keys.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Tue Mar  7 15:14:15 2017 remy
<<<<<<< HEAD
** Last update Fri Mar 10 11:43:14 2017 remy
=======
** Last update Fri Mar 10 11:40:57 2017 jack
>>>>>>> 80d5dd7148088e95f366ad6e3555f0c459591212
*/

#include "tetris.h"

#define ANY	0
#define KD	1
#define KL	2
#define KP	3
#define KQ	4
#define KR	5
#define KT	6
#define LKD	7
#define LKL	8
#define LKP	9
#define LKQ	10
#define LKR	11
#define LKT	12

/* char	*malloc_the_right_key(int index, t_key_binding *keys) */
/* { */
/*   char	*str; */
  
/*   if (index == 0) */
/*     if ((str = malloc(sizeof(char) * my_strlen(keys->key_drop) + 1)) == NULL) */
/*       return (NULL); */
/*   if (index == 1) */
/*     if ((str = malloc(sizeof(char) * my_strlen(keys->key_left) + 1)) == NULL) */
/*       return (NULL); */
/*   if (index == 2) */
/*     if ((str = malloc(sizeof(char) * my_strlen(keys->key_pause) + 1)) == NULL) */
/*       return (NULL); */
/*   if (index == 3) */
/*     if ((str = malloc(sizeof(char) * my_strlen(keys->key_quit) + 1)) == NULL) */
/*       return (NULL); */
/*   if (index == 4) */
/*     if ((str = malloc(sizeof(char) * my_strlen(keys->key_right) + 1)) == NULL) */
/*       return (NULL); */
/*   if (index == 5) */
/*     if ((str = malloc(sizeof(char) * my_strlen(keys->key_turn) + 1)) == NULL) */
/*       return (NULL); */
/*   return (str); */
/* } */

/* char	**create_keys_copy(t_key_binding *keys) */
/* { */
/*   int	index; */
/*   char	**cpy; */

/*   index = 0; */
/*   if ((cpy = malloc(sizeof(char *) * (NB_OF_KEYS + 1))) == NULL) */
/*     return (NULL); */
/*   cpy[index] = NULL; */
/*   while (index != NB_OF_KEYS) */
/*     { */
/*       if ((cpy[index] = malloc_the_right_key(index, keys)) == NULL) */
/* 	return (NULL); */
/*       cpy[index] = send_me_key(index, keys); */
/*       ++index; */
/*     } */
/*   return (cpy); */
/* } */

int	which_long_key(char *key)
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

int	which_key(char *key)
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

int	index_my_key(int i, int *index_key, char **argv)
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

int	change_keys_2(char **argv, t_key_binding *keys,
		      int *index_key, int *i)
{
  int	index_key_2;

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

int	change_keys(char **argv, t_key_binding *keys)
{
  int	i;
  int	index_key;
  int	index_key_2;

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
