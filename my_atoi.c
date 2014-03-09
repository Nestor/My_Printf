/*                                                                                                   
** my_atoi.c for my_printf in /home/bourge_v/rendu/PSU_2013_my_printf                                
**                                                                                                   
** Made by bourge_v                                                                                  
** Login   <bourge_v@epitech.net>                                                                    
**                                                                                                   
** Started on  Sun Nov 17 23:31:40 2013 bourge_v                                                     
** Last update Sun Nov 17 23:31:48 2013 bourge_v                                                     
*/

int     my_atoi(char *str)
{
  int   i;

  i = 0;
  while (*str)
    {
      if (*str >= '0' && *str <= '9')
        {
          i *= 10;
          i += *str - '0';
        }
      else
        return (i);
      str = str + 1;
    }
  return (i);
}
