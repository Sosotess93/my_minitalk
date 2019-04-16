/*
** affiche.c for ffiche in /home/charra_s/PSU_2014_minitalk/server
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Wed Mar 25 17:02:33 2015 Sofiane Charrad
** Last update Fri Nov 13 09:10:47 2015 Sofiane Charrad
*/

#include "serveur.h"

void	aff_one()
{
 my_putchar('\n');
  my_putchar('\n');
  my_putstr("\t#####################################################\n");
  my_putstr("\t#                      WELCOME                      #\n");
  my_putstr("\t#                        TO                         #\n");
  my_putstr("\t#                    Sofiane PC                     #\n");
  my_putstr("\t#                                                   #\n");
  my_putstr("\t#####################################################\n\n");
  my_putstr("  \t <----------------Fonctionnement----------------->\n");
  my_putstr("             \t./server : Lance le serveur\n");
  my_putstr("\t./client 'PID' 'message'  : Envoi un message au client.\n");
  my_putstr("\t<----------------------------------------------->\n");
  my_putstr("\t<------------------Exemple---------------------->\n");
  my_putstr("   \ttExemple  : ./client 41234 'Salut ça va?'\n");
  my_putstr(" \t<----------------------------------------------->\n");
  my_putchar('\n');
  my_putchar('\n');
  my_putstr("       ");
}

int	aff_two()
{
  int	i;
  int	j;

  j = 0;
  i = 0;
  while (i < 45)
    {
      my_putchar('.');
      while (j < 100000000)
	j++;
      i++;
      j = 0;
    }
  my_putchar('\n');
  my_putchar('\n');
  my_putchar('\n');
  return (0);
}

void	affiche()
{
  aff_one();
  aff_two();
}
