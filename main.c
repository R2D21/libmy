#include "includes/my.h"

int	main()
{
  char *dest = malloc(4096 * sizeof(char));
  char	**tab = NULL;

  if ((tab = malloc_tab(tab)) == NULL)
    return (1);
  else if ((my_strcpy("Hell44", tab[0])) == NULL)
    return (1);
  my_puttab(tab);
  my_putchar('\n');
  printf("%i\n", my_strcmp("Hell44", dest));
  return (0);
}
