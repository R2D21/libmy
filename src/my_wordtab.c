#include "../includes/my.h"

int	count_word(char *str, char c)
{
  int	i;
  int	count;
  
  i = 0;
  count = 0;
  while (str[i] != '\0')
    {
      if (str[i] == c)
	count++;
      i++;
    }
  return (count);
}

char	*copy(char *str, char c)
{
  int	i;
  char	*tmp;

  if ((tmp = malloc(4096 * sizeof (char))) == NULL)
    my_putstr_error("[MY_WORDTAB:26] Error: malloc is fail().\ntmp is NULL.\n");
  else
    {
      i = 0;
      while (str[count1] != '\0' && str[count1] != c)
	tmp[i++] = str[count1++];
      tmp[i] = '\0';
      count1++;
      return (tmp);
    }
  return (NULL);
}

char	**my_wordtab(char *str, char c)
{
  char	**tab;
  int	i;

  i = 0;
  tab = NULL;
  if ((tab = malloc_tab(tab)) == NULL)
    my_putstr_error("[MY_WORDTAB:48] Error: malloc_tab() is fail.\ntab is NULL.\n");
  else
    {
      while (i < 2)
	tab[i++] = copy(str, c);
      count1 = 0;
      return (tab);
    }
  return (NULL);
}
