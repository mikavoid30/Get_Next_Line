/*
** main.c for main de test in /home/boulat_m/rendu/Projets/CPE_2014_my_printf
** 
** Made by Mickael BOULAT
** Login   <boulat_m@epitech.net>
** 
** Started on  Sun Nov 16 22:13:51 2014 Mickael BOULAT
** Last update Mon Dec  1 14:17:51 2014 Mickael BOULAT
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "my.h"

int	main()
{
  char	*res;
  int	fd;

  fd = open("test", O_RDONLY);
  while (res = get_next_line(fd))
    {
      if (res != NULL)
	my_putstrcn(res, YELLOW, 1);
      my_putchar('#');
      free(res);
    }
  return (0);
}
