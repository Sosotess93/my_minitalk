/*
** my_write_client.c for my_write in /home/charra_s/PSU_2014_minitalk/client
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Wed Mar 18 22:43:52 2015 Sofiane Charrad
** Last update Wed Mar 25 13:21:04 2015 Sofiane Charrad
*/

#include "client.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

int		my_getnbr(char *str)
{
  int	nbr;
  int	neg;

  nbr = 0;
  neg = 1;
  while (*str == '+' || *str == '-')
    {
      if (*str == '-')
        {
          neg = neg * (- 1);
        }
      str = str + 1;
    }
  while (*str <= '9' && *str >= '0')
    {
      nbr = nbr * 10;
      nbr = (nbr + (*str - '0'));
      str = str + 1;
    }
  if (neg > 0 && nbr < 0)
    return (0);
  else
    return (nbr * neg);
}
