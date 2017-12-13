/*
** write.c for  in /home/zitouni/Epitech/trainig/msg
** 
** Made by Yassine Zitouni
** Login   <zitoun_y@epitech.net>
** 
** Started on  Wed Feb 25 17:32:54 2015 Yassine Zitouni
** Last update Sun Mar 22 14:52:01 2015 Yassine Zitouni
*/

#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>
#include	"write.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

int		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i++;
  return (0);
}

void		my_putnbr(int nbr)
{
  if (nbr >= 10)
    my_putnbr(nbr / 10);
  nbr = nbr % 10;
  my_putchar(nbr + 48);
}

int		my_put_nbr(int nb)
{
  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  my_putnbr(nb);
  return (1);
}
