#include "includes/my.h"

int		main()
{
  t_list	*list;

  list = init();
  add_elem(list, "Struct\0");
  /* my_putchar('\n'); */
  /* aff_list(list); */
  /* my_putchar('\n'); */
  /* supp_elem(list); */
  add_elem(list, "Struct1\0");
  printf("%s\n", list->first->str);
  list->first->next;
  /* aff_list(list);  */
  my_putchar('\n');
 return (0);
}
