/*
** my_cstrlen.c for  in /home/zitouni/rendu/PSU_2014_minishell1
** 
** Made by Yassine Zitouni
** Login   <zitoun_y@epitech.net>
** 
** Started on  Wed Jan 28 13:42:58 2015 Yassine Zitouni
** Last update Wed Jan 28 13:43:01 2015 Yassine Zitouni
*/


#include	<stdlib.h>

int		my_cstrlen(char *str, char c)
{
  int		n;

  n = -1;
  if (str == NULL)
    return (n);
  while (str[++n] != c && str[n] != '\0');
  return (n);
}
