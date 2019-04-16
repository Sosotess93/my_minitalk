/*
** client.c for client.c in /home/charra_s/PSU_2014_minitalk/client
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Wed Mar 18 22:34:07 2015 Sofiane Charrad
** Last update Wed Mar 25 13:19:38 2015 Sofiane Charrad
*/

#include "client.h"

int	send_for_client(int i, char c)
{
  char	a;

  a = 0;
  while (a < 9)
    {
      if (((c >> a) & 1) == 1)
	{
	  if (kill(i, SIGUSR1) == 1)
	    {
	      my_putstr("Error: Signal.\n");
	      exit(0);
	    }
	}
      else
	if (kill(i, SIGUSR2) == 1)
	  {
	    my_putstr("Error: Signal.\n");
	    exit(0);
	  }
      usleep(100);
      a++;
    }
  return (0);
}

int	client(char **tab)
{
  int	i;
  int	pid;
  char	*str;

  if ((pid = my_getnbr(tab[1])) <= 0)
    {
      my_putstr("Error: Bad PID.\n");
      return (-1);
    }
  str = tab[2];
  i = 0;
  while (str[i] != '\0')
    {
      send_for_client(pid, str[i]);
      i++;
    }
  send_for_client(pid, str[i]);
  return (0);
}

int	main(int ac, char **av)
{
  if (ac == 3)
    client(av);
  else
    {
      my_putstr("Error: 2 Argument nécessaire.\n");
      my_putstr("./Server PID et le message.\n");
      return (1);
    }
  return (0);
}
