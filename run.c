/*                                                                                                   
** run.c for my_printf in /home/bourge_v/rendu/PSU_2013_my_printf                                    
**                                                                                                   
** Made by bourge_v                                                                                  
** Login   <bourge_v@epitech.net>                                                                    
**                                                                                                   
** Started on  Sun Nov 17 23:38:42 2013 bourge_v                                                     
** Last update Sun Nov 17 23:38:44 2013 bourge_v                                                     
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

int             check_match(char *chr, t_tab *tab, int output, va_list ap)
{
  int           i;
  int           j;

  i = 0;
  j = 0;
  while ((*chr != tab->flag) && i < 18)
    {
      tab = tab + 1;
      i = i + 1;
    }
  if (i == 18)
    my_putstr("?.?");
  else
    output = tab->fct(ap, output, chr);
  return (output);
}

void            run(char *fmt, t_tab *tab, va_list ap)
{
  char          *ptr;
  int           output;

  ptr = fmt;
  output = 0;
  while (*ptr)
    {
      if (*ptr == '%')
        {
          ptr = ptr + 1;
          output = check_match(ptr, tab, output, ap);
        }
      else
        output = output + my_putchar(*ptr);
      if (*ptr == '+' || *ptr == ' ')
        ptr = ptr + 1;
      ptr = ptr + 1;
    }
}
