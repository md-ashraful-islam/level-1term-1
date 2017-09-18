#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char str[]="This is a file which is opened by my program.";
    char ch,*p;

    p=str;

    if((fp=fopen("my text.txt","w"))==NULL)
    {
        perror("Program can not open file for write.");
        exit(1);
    }

    while(*p)
        if((fputc(*p++,fp))==EOF)
        {
            perror("Program can not write in file.");
            exit(2);
        }

    fclose(fp);

    //output
    if((fp=fopen("my text.txt","r"))==NULL)
    {
        perror("Program can not open file for read.");
        exit(3);
    }

    while((ch=fgetc(fp))!=EOF)
        putchar(ch);

    fclose(fp);
    return 0;
}
