/*
** serveur.c for serveur in /home/charra_s/PSU_2014_minitalk/serveur
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Wed Mar 18 22:57:38 2015 Sofiane Charrad
** Last update Wed Mar 25 17:02:48 2015 Sofiane Charrad
*/

#include "serveur.h"

void		signal_for_send(int value)
{
  if (value == SIGUSR1)
    send_message(1);
  if (value == SIGUSR2)
    send_message(0);
}

void		send_message(int value)
{
  static  char	cpt;
  static  char	cpt2;

  cpt = cpt + (value << cpt2++);
  if (cpt2 > 8)
    {
      if (cpt == '\0')
	my_putchar('\n');
      else
	my_putchar(cpt);
      cpt = 0;
      cpt2 = 0;
    }
}

int		main(int ac, char **av)
{
  if (ac != 1)
    {
      my_putstr("Error : Pas assez argument.\n");
      return (1);
    }
  affiche();
  my_putstr("Votre PID: ");
  my_put_nbr(getpid());
  my_putchar(' ');
  my_putchar('\n');
  while (42)
    {
      if (signal(SIGUSR1, signal_for_send) == SIG_ERR)
        {
          my_putstr("Error.\n");
          exit(0);
        }
      if (signal(SIGUSR2, signal_for_send) == SIG_ERR)
        {
          my_putstr("Error.\n");
          exit(0);
        }
    }
}
