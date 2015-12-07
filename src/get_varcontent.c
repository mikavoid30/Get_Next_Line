/*
** get_varcontent.c for get_varcontent in /home/boulat_m/tps/my_select
** 
** Made by Mickael BOULAT
** Login   <boulat_m@epitech.net>
** 
** Started on  Fri Nov 21 18:42:26 2014 Mickael BOULAT
** Last update Fri Nov 21 18:43:14 2014 Mickael BOULAT
*/

#include <stdlib.h>
#include <unistd.h>

int     is_this_var(char *var, char *str)
{
  int   ok;
  int   i;

  ok = 1;
  i = 0;
  while (*var)
    {
      if (*var != str[i])
        {
          ok = 0;
        }
      var++;
      i++;
    }
  if ((ok == 1) && (str[i] != '='))
    {
      ok = 0;
    }
  return (ok);
}

char    *get_varcontent(char **env, char *name, char *s2)
{
  int   i;

  i = 0;
  while (env[i] != '\0')
    {
      if (is_this_var(name, env[i]))
        {
          if ((s2 = malloc(my_strlen(env[i])) != 0))
            s2 = &env[i][(my_strlen(name) + 1)];
        }
      i++;
    }
  return (s2);
}
