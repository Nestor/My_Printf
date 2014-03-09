/*                                                                                                   
** my_putunbr_base.c for my_printf in /home/bourge_v/rendu/PSU_2013_my_printf                        
**                                                                                                   
** Made by bourge_v                                                                                  
** Login   <bourge_v@epitech.net>                                                                    
**                                                                                                   
** Started on  Sun Nov 17 23:39:07 2013 bourge_v                                                     
** Last update Sun Nov 17 23:39:10 2013 bourge_v                                                     
*/

#include "my.h"

typedef unsigned int uint;

int     my_putunbr_base(uint nb, char *base)
{
  uint   result;
  uint   diviseur;
  int   size_base;
  int   output;

  output = 0;
  size_base = my_strlen(base);
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
