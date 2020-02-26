#include "my_ls.h"
#include <unistd.h>

int		my_strcmp(char *s1, char *s2)
{
  int		i;
  int		a;
  
  a = 0;
  i = 0;
  while (s1[i] != '\0')
    {
      if (s1[a] == s2[i])
        {
          a++;
        }
      i++;
    }
  if ((a == my_strlen(s2)) && (a == my_strlen(s1)))
    {
      return (0);
    }
  if ((a != my_strlen(s2)) && (a != my_strlen(s1)))
    {
      return (1);
    }
  return (0);
}  