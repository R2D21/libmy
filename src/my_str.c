#include "../includes/my.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

char	*my_strcpy(char *str, char *dest)
{
  int	i;

  i = 0;
  if (str == NULL || *str == '\0')
    printf("error\n");
  else
    {
      while (str[i] != '\0')
	dest[i] = str[i++];
      return (dest);
    }
  return (NULL);
}

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0')
    i++;
  if (s1[i] > s2[i])
    return (1);
  else if (s1[i] == s2[i])
    return (0);
  else
    return (-1);
}
