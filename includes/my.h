#ifndef _MY_H_
#define _MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static int count1 = 0;

int	my_strlen(char *str);
int	my_strcmp(char *s1, char *s2);

char	*my_strcpy(char *str, char *dest);

char	**malloc_tab(char **tab);
char	**my_wordtab(char *str, char c);

void	my_putchar(char c);
void	my_putstr(char *str);
void	my_putstr_error(char *str);
void	my_puttab(char **tab);

#endif
