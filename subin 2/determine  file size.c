#include<stdio.h>

int main()
{
    FILE *fp;
    char *filename="beautiful-wallpaper-download-14.JPG";
    fp=fopen(filename,"rb");
    fseek(fp,0,SEEK_END);

    printf("THE FILE SIZE IS : %ld\n",ftell(fp));
    printf("THE FILE SIZE IS(kilobytes) : %ld",ftell(fp)/1024);

    fclose(fp);
    return 0;
}
