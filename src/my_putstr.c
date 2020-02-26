#include "my_ls.h"
#include <unistd.h>

int		my_putstr(char *str)
{
  return (write(1, str, my_strlen(str)));
}
