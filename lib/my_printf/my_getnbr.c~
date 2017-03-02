/*
** my_getnbr.c for printf in /home/jack/rendu/psu/printf
**
** Made by jack
** Login   <jack@epitech.net>
**
** Started on  Sun Feb 26 17:32:14 2017 jack
** Last update Tue Feb 28 16:26:08 2017 jack
*/

int	my_strlen(char *);

int	is_neg(char *str, int i)
{
  int	size;

  size = my_strlen(str);
  i -= 1;
  while (i >= 0)
    {
      if (str[i] == '-')
	return (1);
      i--;
    }
  return (0);
}

int		overflow(int nbr, char *str, int i, int neg)
{
  char		ovflw;
  unsigned int	calcul;

  ovflw = 0;
  calcul = nbr * 10 + (str[i] - '0');
  if (calcul > 2147483647 && !neg)
    ovflw = 1;
  else if (calcul > 2147483648 && neg)
    ovflw = 1;
  return (ovflw);
}

int	my_getnbr(char *str)
{
  int	i;
  int	neg;
  int	nbr;

  i = 0;
  nbr = 0;
  while (!(str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
    i++;
  neg = is_neg(str, i);
  while (str[i] >= '0' && str[i] <= '9')
    {
      if (!(overflow(nbr, str, i, neg)))
	nbr = nbr * 10 + (str[i] - '0');
      else
	return (0);
      i++;
    }
  if (neg)
    nbr = -nbr;
  return (nbr);
}
