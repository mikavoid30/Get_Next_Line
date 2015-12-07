/*
** functions-1.c for functions-1 in /home/boulat_m/rendu/Projets/CPE_2014_my_printf/src
** 
** Made by Mickael BOULAT
** Login   <boulat_m@epitech.net>
** 
** Started on  Sat Nov 15 16:46:39 2014 Mickael BOULAT
** Last update Sun Nov 16 23:39:00 2014 Mickael BOULAT
*/

#include <unistd.h>
#include "mypf.h"
#include "my.h"

void	putbinary(void *arg, t_format *format)
{
  int	n;

  n = (int) arg;
  if (format != NULL)
    {
      my_putstr("0b");
      my_putnbr_base(n, "01");
    }
}

void	puthexa(void *arg, t_format *format)
{
  if (format != NULL)
    {
      my_putstr("0x");
      my_putnbr_base((int)arg, "0123456789abcdef");
    }
}

void	puthexamax(void *arg, t_format *format)
{
  if (format != NULL)
    {
      my_putstr("0X");
      my_putnbr_base((int)arg, "0123456789ABCDEF");
    }
}

void	put_char(void *arg, t_format *format)
{
  if (format != NULL)
    {
      my_putchar((char)arg);
    }
}

void	putoctal(void *arg, t_format *format)
{
   if (format != NULL)
    {
      my_putstr("0o");
      my_putnbr_base((int)arg, "01234567");
    }
}
