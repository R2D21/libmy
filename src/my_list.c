#include "../includes/my.h"

t_list		*init()
{
  t_list	*list;
  t_elements	*elements;

  if ((list = malloc(1 * sizeof (*list))) == NULL)
    {
      my_putstr_error("[MY_LIST:10] Error malloc() is fail.\n");
      my_putstr_error("The struct list is NULL.\n");
    }
  /* else if ((list->first = malloc(1 * sizeof (*elements))) == NULL) */
  /*   { */
  /*     my_putstr_error("[MY_LIST:15] Error malloc() is fail.\n"); */
  /*     my_putstr_error("The struct list is NULL.\n"); */
  /*   } */
  else if ((elements = malloc (1  * sizeof (*elements))) == NULL)
    {
      my_putstr_error("[MY_LIST:1120] Error malloc() is fail.\n");
      my_putstr_error("The struct elements is NULL.\n");
    }
  else
    if ((elements->str = malloc(4096 * sizeof (char))) == NULL)
      my_putstr_error("[MY_LIST:251] Error: malloc() is fail.\nstr is NULL");
    else
      {
	elements->next = NULL;
	list->first = elements;
	return (list);
      }
  return (NULL);
}

void		add_elem(t_list *list, char *str)
{
  t_elements	*elements;

  if ((elements = malloc(1 * sizeof (*elements))) == NULL)
    {
      my_putstr_error("[MY_LIST:35] Error malloc is fail.\n");
      my_putstr_error("The struct elements is NULL.\n");
      exit (1);
    }
  else if (list == NULL)
    {
      my_putstr_error("[MY_LIST:35] Error malloc is fail.\n");
      my_putstr_error("The struct elements is NULL.\n");
    }
  else
    {
      elements->str = str;
      elements->next = list->first;
      list->first = elements;
    }
}

/* void		supp_elem1(t_list *list, char *str) */
/* { */
  
/* } */

void		supp_elem(t_list *list)
{
  t_elements	*elements;

  if ((elements = malloc(1 * sizeof (t_elements))) == NULL)
    {
      my_putstr_error("[MY_LIST:64] Error: malloc() is fail.\n");
      my_putstr_error("The struct elements is NULL\n");
    }
  else
    {
      elements = list->first;
      list->first =list->first->next;
      free(elements);
    }
}

void		aff_list(t_list *liste)
{
  if (liste == NULL)
    {
      exit(EXIT_FAILURE);
    }
  t_elements *actuel = liste->first;

  while (actuel != NULL)
    {
      my_putstr(actuel->str);
      actuel = actuel->next;
      my_putchar('\n');
    }
}
