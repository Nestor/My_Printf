/*                                                                                                   
** my_putnbr_base.c for my_printf in /home/bourge_v/rendu/PSU_2013_my_printf                         
**                                                                                                   
** Made by bourge_v                                                                                  
** Login   <bourge_v@epitech.net>                                                                    
**                                                                                                   
** Started on  Sun Nov 17 23:38:57 2013 bourge_v                                                     
** Last update Sun Mar  9 06:31:45 2014 bourge_v                                                     
*/

#include "my.h"

int     my_putnbr_base(int nb, char *base)
{
  int   result;
  int   diviseur;
  int   size_base;
  int   output;

  output = 0;
  size_base = my_strlen(base);
  if (nb < 0)
    {
      output = output + my_putchar('-');
      nb = -nb;
    }
  diviseur = 1;
  while ((nb / diviseur) >= size_base)
    diviseur = diviseur * size_base;
  while (diviseur > 0)
    {
      result = (nb /diviseur) % size_base;
      output = output + my_putchar(base[result]);
      diviseur = diviseur / size_base;
    }
  return (output);
}
