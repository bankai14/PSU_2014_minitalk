/*
** getnbr.c for  in /home/zitouni/rendu/PSU_2014_minitalk/bonus/client
** 
** Made by Yassine Zitouni
** Login   <zitoun_y@epitech.net>
** 
** Started on  Sun Mar 22 14:52:26 2015 Yassine Zitouni
** Last update Sun Mar 22 14:52:29 2015 Yassine Zitouni
*/

#include        <unistd.h>

int              my_getnbr(char *str)
{
  int           nbr;
  int           cnt;
  int           unit;

  cnt = 0;
  nbr = 0;
  unit = 1;
  while (str[cnt] != 0)
    {
      if (str[cnt] == '-' && str[cnt + 1] >= '0' && str[cnt + 1] <= '9')
        {
          unit = -unit;
          cnt = cnt + 1;
        }
      if (str[cnt] >= '0' && str[cnt] <= '9')
        {
          nbr = (nbr * 10) + (str[cnt] - '0');
          cnt = cnt + 1;
        }
    }
  return (nbr * unit);
}
