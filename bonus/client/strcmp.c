/*
** strcmp.c for  in /home/zitouni/rendu/PSU_2014_minitalk/bonus/client
** 
** Made by Yassine Zitouni
** Login   <zitoun_y@epitech.net>
** 
** Started on  Sun Mar 22 14:58:49 2015 Yassine Zitouni
** Last update Sun Mar 22 14:59:09 2015 Yassine Zitouni
*/

int             my_strcmp(char *str1, char *str2)
{
  int           i;

  i = 0;
  while (str1[i] != '\0')
    {
      if (str1[i] != str2[i])
        return (1);
      i++;
    }
  return (0);
}
