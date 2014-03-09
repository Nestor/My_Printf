/*                                                                                                   
** fct_l.c for my_printf in /home/bourge_v/rendu/PSU_2013_my_printf                                  
**                                                                                                   
** Made by bourge_v                                                                                  
** Login   <bourge_v@epitech.net>                                                                    
**                                                                                                   
** Started on  Sun Nov 17 23:29:13 2013 bourge_v                                                     
** Last update Sun Nov 17 23:29:15 2013 bourge_v                                                     
*/

#include <stdarg.h>
#include "my.h"

int     flag_ld(va_list list, int output, char *ptr)
{
  long  nb;

  nb = va_arg(list, long);
  output = output + my_put_lnbr(nb);
  return (output);
}

int     flag_lo(va_list list, int output, char *ptr)
{
  long  nb;

  nb = va_arg(list, long);
  output = output + my_putlnbr_base(nb, "01234567");
  return (output);
}

int     flag_lx(va_list list, int output, char *ptr)
{
  long  nb;

  nb = va_arg(list, long);
  if (nb < 0)
    output = output + my_putstr("ffffffff");
  else
    output = output + my_putlnbr_base(nb, "0123456789abcdef");
  return (output);
}

int     flag_lX(va_list list, int output, char *ptr)
{
  long  nb;

  nb = va_arg(list, long);
  if (nb < 0)
    output = output + my_putstr("FFFFFFFF");
  else
    output = output + my_putlnbr_base(nb, "0123456789ABCDEF");
  return (output);
}
