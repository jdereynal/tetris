/*
** change_keys.c for tetris in /home/remy/blinux/remy.machado/PSU_2016_tetris/srcs
** 
** Made by remy
** Login   <remy@epitech.net>
** 
** Started on  Tue Mar  7 15:14:15 2017 remy
** Last update Wed Mar  8 14:31:00 2017 remy
*/

#include "tetris.h"

#define ANY	0
#define KD	1
#define KL	2
#define KP	3
#define KQ	4
#define KR	5
#define KT	6

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
  return (ANY);
}

int	change_keys(char **argv, t_key_binding *keys)
{
  int	i;
  int	index_key;
  int	index_key_2;

  i = 0;
  while (argv[i] != NULL)
    {
      if (((index_key = which_key(argv[i])) > 0) &&
	  (argv[i + 1] == NULL))
	return (RET_FAIL);
      if (((index_key = which_key(argv[i])) == 0) &&
      	  (argv[i + 1] != NULL))
      	{
      	  ++i;
      	  continue;
      	}
      index_key_2 = which_key(argv[i + 1]);
      if ((index_key > 0) && (index_key_2 > 0))
	attribute_key((index_key - 1), (index_key_2 - 1), keys);
      else if ((index_key > 0) && ((index_key_2 = which_key(argv[i + 1]) == 0)))
	attribute_unknown_seq((index_key - 1), argv[i + 1], keys);
      i += 2;
    }
  return (RET_SUCCESS);
}
