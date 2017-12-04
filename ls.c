#include <stdio.h>
#include <string.h>
#include <dirent.h>

int main(int argc, char **argv)
{
    DIR *dir;
    struct dirent *dp;
    char filename[256];

    if ( argc < 2 )
        strcpy(filename, ".");
    else
        strcpy(filename, argv[1]);

    printf("Your directory: %s\n", filename);
    printf("Your Directory List:\n\n");
    dir=opendir(filename);

    while( (dp=readdir(dir)) != NULL )
            printf("%s\n", dp->d_name);

    closedir(dir);
    return 0;
}
