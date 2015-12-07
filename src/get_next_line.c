/*
** get_next_line.c for get_next_line in /home/boulat_m/rendu/Projets/get_next_line/src
** 
** Made by Mickael BOULAT
** Login   <boulat_m@epitech.net>
** 
** Started on  Fri Nov 28 16:26:13 2014 Mickael BOULAT
** Last update Mon Dec  1 13:55:20 2014 Mickael BOULAT
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"
#include "get_next_line.h"

#define	SEPARATOR '\n'

void	my_memset(char *buff, int nb)
{
  int	i;

  i = 0;
  while (i <= nb)
    {
      buff[i] = '\0';
      i++;
    }
}

char			*get_next_line(int fd)
{
  char			*line;
  static char		**tab;
  int			j;
  int			status;
  static int		i = -1;
  static int		read_length;
  static char		buff[BUFF_SIZE];
  char			*res;
  i++;
  if (i == 0)
    {
      my_memset(buff, BUFF_SIZE);
      while ((read_length = read(fd, buff, BUFF_SIZE)) != 0)
	tab = my_split(SEPARATOR, buff, tab, &status);
      return (tab[i]);
    }
  else
    {
      tab = my_split(SEPARATOR, buff, tab, &status);
      res = tab[i];
      if (res == NULL)
	i = 0;
      return (res);
    }
  
  return (line);
}
