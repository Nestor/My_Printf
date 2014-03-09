/*                                                                                                   
** my_put_lnbr.c for my_printf in /home/bourge_v/rendu/PSU_2013_my_printf                            
**                                                                                                   
** Made by bourge_v                                                                                  
** Login   <bourge_v@epitech.net>                                                                    
**                                                                                                   
** Started on  Sun Nov 17 23:39:22 2013 bourge_v                                                     
** Last update Sun Nov 17 23:39:25 2013 bourge_v                                                     
*/

int     my_put_lnbr(long nb)
{
  int   output;

  output = 0;
  if (nb == -2147483648)
    {
      output = output + my_putstr("-2147483648");
      return;
    }
  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
      output = output + 1;
    }
  if (nb > 9)
    output = output + my_put_nbr(nb / 10);
  output = output + my_putchar(nb % 10 + 48);
  return (output);
}
