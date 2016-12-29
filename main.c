#include "includes/my.h"

int	main()
{
  char *dest = malloc(4096 * sizeof(char));
  char	**tab = NULL;
  char	**tab1 = NULL;
  
  if ((tab = malloc_tab(tab)) == NULL)
    return (1);
  else if ((tab1 = malloc_tab(tab)) == NULL)
    return (1);
  tab = my_wordtab("bonjour;aurevoir\0", ';');
  my_puttab(tab);
  tab1 = my_wordtab("pipi;caca", ',');
  my_puttab(tab1);
  return (0);
}
