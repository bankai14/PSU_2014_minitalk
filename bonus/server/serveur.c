/*
** serveur.c for  in /home/zitouni/Epitech/trainig/msg
** 
** Made by Yassine Zitouni
** Login   <zitoun_y@epitech.net>
** 
** Started on  Tue Feb 24 21:10:45 2015 Yassine Zitouni
** Last update Fri Feb 27 12:21:32 2015 Yassine Zitouni
*/

#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>
#include	<signal.h>
#include	"serveur.h"
#include	"write.h"


void            serv_action(int serv_sig)
{
  static int    i;
  static char   buffer;

  if (serv_sig == SIGUSR2)
    {
      buffer |= 1 << (7 - i);
    }
  ++i;
  if (i == 8)
    {
      my_putchar(buffer);
      buffer = 0;
      i = 0;
    }
}

void            serv_waiting_signal()
{
  signal(SIGUSR1, serv_action);
  signal(SIGUSR2, serv_action);
  while (42)
    {
      pause();
    }
}

int		main()
{
  my_putstr("\033[34mSERVER PID : \033[0m");
  my_put_nbr(getpid());
  my_putstr("\n\n\033[2mAttente du message du  client...\n\n\033[0m");
  serv_waiting_signal();
  return (0);
}
