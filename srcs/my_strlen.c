/*
** my_strlen.c for tetris in /home/jack/rendu/tetris
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Sun Feb 26 15:55:33 2017 jack
** Last update Sun Feb 26 15:56:20 2017 jack
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}
