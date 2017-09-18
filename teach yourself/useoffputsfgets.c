#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[])
{
    if(argc!=2)
    {
        printf("Use this format: <filename> \n");
        return -1;
    }

    FILE *fp;
    char str[100];

    if((fp=fopen(argv[1],"w"))==NULL)
    {
        printf("program can not open file for writing.");
        return -2;
    }

    printf("Enter some character which is written in file(write exit\\ to stop): ");
    do
    {
//        printf(": ");
        gets(str);
        strcat(str,"\n");
        if((fputs(str,fp))==EOF)
        {
            printf("There is some error while assigning string.");
            return -3;
        }
    }while(strcmp(str,"exit\\"));
    fclose(fp);

    if((fp=fopen(argv[1],"r"))==NULL)
    {
        printf("program can not open file for reading.");
        return -2;
    }

    printf("\nPrinting what is written in file: \n");
    do
    {
        fgets(str,100,fp);
        printf(str);
    }while(!feof(fp));
    fclose(fp);

    return 0;
}
