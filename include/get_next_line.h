/*
** my.h for my in /home/boulat_m/rendu/semaine2/Piscine_C_J09
** 
** Made by Mickael BOULAT
** Login   <boulat_m@epitech.net>
** 
** Started on  Thu Oct  9 10:53:19 2014 Mickael BOULAT
** Last update Sat Nov 29 09:20:05 2014 Mickael BOULAT
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE__H_

#   define BUFF_SIZE 512
#   define BLACK "\033[30m"
#   define RED "\033[31m"
#   define GREEN "\033[32m"
#   define YELLOW "\033[33m"
#   define BLUE "\033[34m"
#   define MAGENTA "\033[35m"
#   define CYAN "\033[36m"
#   define WHITE "\033[37m"
#   define INIT "\033[0m"
#   define BOLD "\033[1m"
#   define BLINK "\033[5m"
#   define AUTO "\033[7m"

typedef struct	s_list
{
  char		*data;
  struct s_list	*next;
}		t_list;

#endif
