#include "my_ls.h"
#include <unistd.h>

int		my_strlen(char *str)
{
  int		i;
  
  i = 0;
  while (str[i] != 0)
    i++;
  return (i);
}