#include "../includes/my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void	my_putstr_error(char *str)
{
  write(2, str, my_strlen(str));
}

void	my_puttab(char **tab)
{
  int	i;

  i = 0;
  while (*tab[i] != '\0')
    {
      write(1, tab[i], my_strlen(tab[i]));
      my_putchar('\n');
      i++;
    }
}
