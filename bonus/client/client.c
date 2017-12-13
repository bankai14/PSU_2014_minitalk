/*
** client.c for  in /home/zitouni/Epitech/trainig/msg
** 
** Made by Yassine Zitouni
** Login   <zitoun_y@epitech.net>
** 
** Started on  Tue Feb 24 21:18:37 2015 Yassine Zitouni
** Last update Tue Aug  4 22:07:12 2015 Yassine Zitouni
*/

#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>
#include	<signal.h>
#include	<sys/types.h>
#include	"client.h"
#include	"write.h"
#include	"get_next_line.h"

void    my_signal(int pid, char *str)
{
  int   i;
  int   j;

  j = 0;
  while (str[j])
    {
      i = 7;
      while (i >= 0)
        {
          usleep(1000);
          if (((str[j] >> i) & 1) == 0)
            kill(pid, SIGUSR1);
          else
            kill(pid, SIGUSR2);
          i--;
        }
      j++;
    }
}
void    my_sending(int pid, char *str)
{
  while(42)
    {
      my_putstr("$> ");
      str = get_next_line(0);
      if (str == NULL || my_strlen(str) == 0)
	exit(1);
      else
	{
	  my_putstr("\n\033[2mmessage en cours d'envoi...\033[0m");
	  my_signal(pid, str);
	  my_signal(pid, "\n\n");
	  my_putstr("\n\n\033[33mMessage envoyé !\033[0m\n\n");
	}
    }
}

void	msg_error(int ac, char **av)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  
  if (ac < 2)
    {
      my_putstr("Ajouter le PID\n");
      exit (1);
    }
  my_strlen(&av[1][j]);
  {
    while (av[1][j] != '\0' || j == ' ')
      {
	if (av[1][j] < '0' || av[1][j] > '9')
          {
            my_putstr("Error il y'a un caractère dans le PID\n");
            exit(1);
          }
        j++;
      }
  }
}

int	msg_error2(int ac, char **av)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  if (av[1][i] < '0' || av[1][i] > '9')
    {
      my_putstr("Ce n'est pas un PID\n");
      exit(1);
    }
  else if (ac <= 3)
    my_sending(my_getnbr(av[1]), av[2]);
  return (0);
}

int	main(int ac, char **av)
{
  int	i;
  int	j;
  int	pid;

  msg_error(ac, av);
  msg_error2(ac, av);
  if (av[1][i] < '0' || av[1][i] > '9')
    {
      my_putstr("Ce n'est pas un PID\n");
      exit(1);
    }
  else if (ac < 3)
    {
      my_putstr("Ajouter votre message\n");
      exit (1);
    }
  else
    {
      my_putstr("\033[31mCLIENT PID : \033[0m");
      my_put_nbr(getpid());
      my_putchar('\n');
      my_sending(my_getnbr(av[1]), get_next_line(0));
    }
  return (0);
}
