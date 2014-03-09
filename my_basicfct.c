/*                                                                                                   
** my_basicfct.c for my_printf in /home/bourge_v/rendu/PSU_2013_my_printf                             
**                                                                                                   
** Made by bourge_v                                                                                  
** Login   <bourge_v@epitech.net>                                                                    
**                                                                                                   
** Started on  Sun Nov 17 23:32:21 2013 bourge_v                                                     
** Last update Sun Nov 17 23:36:17 2013 bourge_v                                                     
*/

int     my_putchar(char c)
{
  write(1, &c, 1);
  return (1);
}

int     my_putstr(char *str)
{
  int   output;

  output = 0;
  while (*str)
    {
      my_putchar(*str);
      output = output + 1;
      str = str + 1;
    }
  return (output);
}

int     my_strlen(char *str)
{
  int   i;

  i = 0;
  while (str[i])
    i = i + 1;
  return (i);
}

char    *my_strcat(char *dest, char *src)
{
  int   i;
  int   j;

  j = 0;
  i = my_strlen(dest);
  while (src[j])
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  dest[i] = '\0';
  return (dest);
}

int     my_put_nbr(int nb)
{
  int   output;

  output = 0;
  if (nb == -2147483648)
    {
      output = output + my_putstr("-2147483648");
      return (output);
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
