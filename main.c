/*                                                                                                   
** main.c for my_printf in /home/bourge_v/GitHub/PSU_2013_my_printf                                  
**                                                                                                   
** Made by bourge_v                                                                                  
** Login   <bourge_v@epitech.net>                                                                    
**                                                                                                   
** Started on  Sun Mar  9 06:16:03 2014 bourge_v                                                     
** Last update Sun Mar  9 06:18:51 2014 bourge_v                                                     
*/

char    *my_strcpy(char *dest, const char *src)
{
  int   i;

  i = 0;
  while (dest && src && src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  if (i != 0)
    dest[i] = '\0';
  return (dest);
}

int     main()
{
  char  str[5];

  my_strcpy(str, "toto");
  str[1] = 6;
  my_printf("%S", str);
  my_printf("\n");
  return (0);
}

/*                                                                                                   
** MAIN DE TEST A MODIFIER A VOTRE GUISE.                                                            
*/
