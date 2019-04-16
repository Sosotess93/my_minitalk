/*
** client.h for client in /home/charra_s/PSU_2014_minitalk/client
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Wed Mar 18 22:29:51 2015 Sofiane Charrad
** Last update Thu Mar 19 01:49:51 2015 Sofiane Charrad
*/

#ifndef CLIENT_H_
# define CLIENT_H_

#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int	my_strlen(char *str);
int	my_getnbr(char *str);
void	my_puchar(char c);
int	client(char **tab);
int	send_for_client(int i, char c);

#endif /* !CLIENT_H_ */
