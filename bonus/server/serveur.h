/*
** serveur.h for  in /home/zitouni/rendu/PSU_2014_minitalk
** 
** Made by Yassine Zitouni
** Login   <zitoun_y@epitech.net>
** 
** Started on  Thu Feb 26 17:54:44 2015 Yassine Zitouni
** Last update Wed Mar 18 13:16:52 2015 Yassine Zitouni
*/

#ifndef		SERVER_H
# define	SERVER_H

int		my_power_rec(int nb, int power);
void		convert_back(char *buffer);
void		serv_handler(int serv_sig);
void		serv_waiting_signal();


#endif		/*SERVER_H*/
