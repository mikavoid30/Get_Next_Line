/*
** mypf.h for mypf in /home/boulat_m/rendu/Projets/CPE_2014_my_printf/include
** 
** Made by Mickael BOULAT
** Login   <boulat_m@epitech.net>
** 
** Started on  Mon Nov 10 09:32:53 2014 Mickael BOULAT
** Last update Sun Nov 16 23:38:59 2014 Mickael BOULAT
*/

#ifndef MYPF_H_
# define MYPF_H_

typedef struct	s_conf
{
  char		*flags;
  char		*convertions;
}		t_conf;

typedef struct	s_format
{
  char		*flags;
  char		*width_str;
  int		width;
  char		*precision_str;
  int		precision;
  char		*prefix;
  char		type;
}		t_format;

typedef	struct	s_fcts
{
  char		c;
  void		(*action)(void *, t_format *);
}		t_fcts;

int	my_printf(const char *, ...);
void	puthexamax(void *, t_format *);
void	fill_str(char *, char, int);
char	*format_precision(char *, char *, t_format *);
char	*format_width(char *, char *, t_format *);
void	putinteger(void *, t_format *);
int     is_in_tab(char, char *);
char	*check_format(const char *, t_format *, t_conf *);
char	*get_format_flags(char *, t_conf *, t_format *);
char	*get_format_width(char *, t_format *);
char	*get_format_precision(char *, t_format *);
char	*get_format_prefix(char *, t_conf *, t_format *);
char	*get_format_type(char *, t_conf *, t_format *);
void	print_debug_parsing(t_format *);
char	*check_multiples_modulos(const char *);
char	*add_char(char, char *);
char	is_a_flag(char, t_conf *);
char	is_a_type(char, t_conf *);
int	is_numeric(char);
void	my_free_conf(t_conf *);
void	my_free_format(t_format *);
void	init_conf(t_conf *);
void	init_format(t_format *);
void	putinteger(void *, t_format *);
void	put_char(void *, t_format *);
void	putoctal(void *, t_format *);
void	putbinary(void *, t_format *);
void	puthexa(void *, t_format *);
void	putstring(void *, t_format *);
void	init_format(t_format *);
int	get_index(char);

#endif /* MYLS_H_ */
