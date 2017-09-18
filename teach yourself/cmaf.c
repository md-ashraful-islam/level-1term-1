#include<stdio.h>

int main(int argc,char *argv[])
{
    if(argc!=3)
    {
        printf("Argument must be 2");
        return 2;
    }
    FILE *fp;

    if((fp=fopen(argv[1],"r"))==NULL)
    {
        perror("File can not open.");
        return -1;
    }

    char ch='1';

    while(((ch=fgetc(fp))!=EOF))
        if(ch==argv[2][0])
        {
            printf("The character %c find in file",argv[2][0]);
            fclose(fp);
            return 0;
        }

    printf("The character %c does not find in file",argv[2][0]);
    fclose(fp);
    return 0;
}
