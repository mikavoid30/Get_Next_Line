/*
** my_split.c for my_split in /home/boulat_m/rendu/Projets/get_next_line
** 
** Made by Mickael BOULAT
** Login   <boulat_m@epitech.net>
** 
** Started on  Mon Dec  1 14:15:10 2014 Mickael BOULAT
** Last update Mon Dec  1 15:18:21 2014 Mickael BOULAT
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int	count_words(char *str, char separator)
{
  int	counter;

  counter = 0;
  if (my_strlen(str) > 1)
    {
      counter = 1;
      while (*str)
	{
	  if (*str == separator)
	    counter++;
	  str++;
	}
    }
  return (counter);
}

int	set_word(char **tab, int j, char *word, char *c)
{
  int	size;
  int	i;
  int	x;

  x = 0;
  if (*c == '\0')
    x = -1;
  *c = '\0';
  size = my_strlen(word);
  i = 0;
  if ((tab[j] = malloc(100)) != 0)
    while ((i < size) && ((word[i] != '\n') || (word[i] != '\0')))
      {
	tab[j][i] = word[i];
	i++;
      }
  tab[j][i] = '\0';
  j++;
  return (x);
}

char	*init_var(char *cpy, char *str, int *i, int *j)
{
  cpy = (char *)my_strdup(str);
  *i = 0;
  *j = 0;
  return (cpy);
}

char	*rem_cr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\n' && str[i])
    i++;
  str[i] = '\0';
  return (str);
}

char	**my_split(char sep, char *str, char **tab, int *nw)
{
  int	i;
  int	j;
  char	*word;
  char	*cpy;
  int	size;

  i = 0;
  cpy = init_var((cpy = NULL), str, &i, &j);
  size = sizeof(char *) * (*nw = count_words(cpy, sep)) + 1;
  if ((tab = (char **)malloc(size)) != 0)
    {
      while (i != -1)
	{
	  if ((*cpy != sep) && (*cpy != '\0'))
	    {
	      if (0 == i++)
		  word = cpy;
	    }
	  else if ((*cpy == '\n' || *cpy =='\0') && (*(cpy + 1) != '\0'))
	      i = set_word(tab, j++, word, cpy);
	  cpy++;
	}
      tab[*nw - 1] = NULL;
    }
  return (tab);
}
