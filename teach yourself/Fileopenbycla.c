#include<stdio.h>

int main(int argc,char *argv[])
{
    if(argc!=2)
    {
        printf("Use this format: <filename>\n");
        return -1;
    }

    FILE *fp;
    char ch;

    if((fp=fopen(argv[1],"r"))==NULL)
    {
        perror("Program can not open file.");
        return -2;
    }

    while((ch=fgetc(fp))!=EOF)
        putchar(ch);

    fclose(fp);

    return 0;
}
