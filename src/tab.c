#include "../includes/my.h"

char	**malloc_tab(char **tab)
{
  int	i;

  i = 0;
  if ((tab = malloc(4096 * sizeof (char))) == NULL)
    my_putstr_error("[TAB:6] Error malloc() is fail.\ntab is NULL.\n");
  else
    {
      while (i < 4096)
	if ((tab[i] = malloc(40986 * sizeof (char))) == NULL)
	  my_putstr_error("[TAB:10] Error malloc is fail.\ntab[i] is NULL.");
	else
	  i++;
      return (tab);
    }
  return (NULL);
}
