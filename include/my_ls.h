# ifndef    __MY_LS_H__
# define	__MY_LS_H__

#include <stdlib.h> 
#include <stdio.h> 
#include <unistd.h>
#include <dirent.h>

typedef struct option option;
struct option
{
    int l;
    int R;
    int r;
    int d;
    int t;
    int a;
    int A;
    int L;
};

void		my_putchar(char c);
int			my_strcmp(char *s1, char *s2);
int			my_putstr(char *str);
void		my_putnbr(int i);
int         my_strlen(char *str);
void        my_ls(int argc, char *argv[]);
void        option_arg(int argc, char *argv[], option *opt);
option      create_opt();

# endif