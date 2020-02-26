#include "my_ls.h"

option create_opt()
{
    option opt;

    opt.l = 0;
    opt.R = 0;
    opt.r = 0;
    opt.d = 0;
    opt.t = 0;
    opt.a = 0;
    opt.A = 0;
    opt.L = 0;
    return (opt);
}

void option_arg(int argc, char *argv[], option *opt)
{
    for (int i = 0; i < argc; i++) {
        if (argv[i][0] == '-') {
            for(int j = 0; argv[i][j] != 0; j++) {
                if (argv[i][j] == 'l')
                    opt->l = 1;
                if (argv[i][j] == 'R')
                    opt->R = 1;
                if (argv[i][j] == 'r')
                    opt->r = 1;
                if (argv[i][j] == 'd')
                    opt->d = 1;
                if (argv[i][j] == 't')
                    opt->t = 1;
                if (argv[i][j] == 'a')
                    opt->a = 1;
                if (argv[i][j] == 'A')
                    opt->A = 1;
                if (argv[i][j] == 'L')
                    opt->L = 1;
            }
        }
    }
}

