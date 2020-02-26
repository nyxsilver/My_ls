#include "my_ls.h"

void my_ls(int argc, char *argv[]) 
{
    DIR* rep = NULL;
    struct dirent* fichierLu = NULL;
    option opt;

    opt = create_opt();
    option_arg(argc, argv, &opt);
    rep = opendir(argv[1]); /*Ouverture*/

    if (rep == NULL) /* Si n'a pas pu être ouvert */
            exit(1); 

    while ((fichierLu = readdir(rep)) != NULL)
    {

        if (opt.A == 1 && opt.a == 0 && (fichierLu->d_name[0] == '.' && (fichierLu->d_name[1] != '.' && fichierLu->d_name[1] != 0))) {
            my_putstr(fichierLu->d_name);
            my_putchar('\n'); 
        }
        if(fichierLu->d_name[0] == '.' && opt.a == 1) {
            //truc = malloc(sizeof(char) * my_strlen(fichierLu->d_name));
            my_putstr(fichierLu->d_name);
            my_putchar('\n');
        }  
        else if (fichierLu->d_name[0] != '.')  {
                my_putstr(fichierLu->d_name);
                my_putchar('\n');
        }
    }
    if (closedir(rep) == -1) /*souci avec la fermeture*/
        exit(-1);       
}