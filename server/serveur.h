/*
** serveur.h for serveur in /home/charra_s/PSU_2014_minitalk/serveur
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Thu Mar 19 01:34:45 2015 Sofiane Charrad
** Last update Wed Mar 25 17:03:02 2015 Sofiane Charrad
*/

#ifndef SERVER_H_
# define SERVER_H_

#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

int     my_put_nbr(int n);
void    send_message(int value);
void    signal_for_send(int value);
int     main(int ac, char **av);
void    aff_one();
int     aff_two();
void	affiche();

#endif /* !SERVER_H_ */
