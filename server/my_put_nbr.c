/*
** my_put_nbr.c for put_nbr in /home/charra_s/PSU_2014_minitalk/serveur
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Thu Mar 19 01:32:14 2015 Sofiane Charrad
** Last update Thu Mar 19 01:34:24 2015 Sofiane Charrad
*/

#include "serveur.h"

int	my_put_nbr(int n)
{
  if (n < 0)
    {
      n = n * -1;
      my_putchar('-');
    }
  if (n >= 10)
    {
      my_put_nbr(n / 10);
      my_put_nbr(n % 10);
    }
  else
    {
      my_putchar(48 + n);
    }
}
