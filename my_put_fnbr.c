/*                                                                                                   
** my_put_fnbr.c for my_prinf in /home/bourge_v/rendu/PSU_2013_my_printf                             
**                                                                                                   
** Made by bourge_v                                                                                  
** Login   <bourge_v@epitech.net>                                                                    
**                                                                                                   
** Started on  Sun Nov 17 23:39:45 2013 bourge_v                                                     
** Last update Sun Nov 17 23:39:48 2013 bourge_v                                                     
*/

int     my_put_fnbr(float f)
{
  int   output;

  output = 0;
  if (f == -2147483648)
    {
      output = output + my_putstr("-2147483648");
      return;
    }
  if (f < 0)
    {
      f = -f;
      my_putchar('-');
      output = output + 1;
    }
  if (f > 9)
    output = output + my_put_nbr(f / 10);
  output = output + my_putchar(f % 10 + 48);
  return (output);
}
