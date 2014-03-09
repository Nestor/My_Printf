/*                                                                                                   
** my_printf.c for my_printf in /home/bourge_v/rendu/PSU_2013_my_printf                              
**                                                                                                   
** Made by bourge_v                                                                                  
** Login   <bourge_v@epitech.net>                                                                    
**                                                                                                   
** Started on  Sun Nov 17 23:41:13 2013 bourge_v                                                     
** Last update Thu Jan  9 11:32:24 2014 bourge_v                                                     
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "my.h"

typedef         int (*pFct)(va_list, int, char *);
typedef struct  s_tab
{
  char          flag;
  pFct          fct;
}               t_tab;

int             my_printf(char *fmt, ...)
{
  va_list       ap;
  char          *ptr;
  t_tab         *tab;
  char          *flags_str;

  va_start(ap, fmt);
  ptr = fmt;
  flags_str = "disScpxXobmun%+ l";
  tab = malloc(sizeof(t_tab) * 17);
  fill_tab(tab, flags_str);
  run(fmt, tab, ap);
  va_end(ap);
}
