/*
** utils-2.c for utils-2 in /home/boulat_m/rendu/Projets/minishell
** 
** Made by Mickael BOULAT
** Login   <boulat_m@epitech.net>
** 
** Started on  Sun Nov  9 14:09:46 2014 Mickael BOULAT
** Last update Sat Nov 29 09:21:21 2014 Mickael BOULAT
*/

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"
#include "my.h"

void			my_show_list(t_list *start)
{
  t_list		*current;
  int			i;

  i = 0;
  current = start;
  while (current != NULL)
    {
       my_putstrn(current->data);
     }
}

void    fill(t_list *current, char *str)
{
  int	i;

  i = 0;
  current->data = my_strdup(str);
  current->next = NULL;
}

int			my_putstr_end_list(t_list **start, char *str)
{
  t_list		*current;
  t_list		*last;

  if ((current = malloc(sizeof(t_list))) != 0)
    {
      if ((current->data = malloc(my_strlen(str) + 1)) != 0)
        {
          fill(current, str);
          last = *start;
          if (last != NULL)
            {
              while (last->next != NULL)
                last = last->next;
              last->next = current;
	    }
          else
            *start = current;
        }
    }
  return (0);
}
