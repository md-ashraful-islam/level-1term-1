#include<stdio.h>

int main(int argc,char *argv[])
{
    if(argc!=3)
    {
        printf("Use this format: <source_file_name> <destination_file_name>\n");
        return -1;
    }

    FILE *fpsource,*fpdestination;
    char ch;

    if((fpsource=fopen(argv[1],"rb"))==NULL)
    {
        perror("Program can not open source file.");
        return 1;
    }

    if((fpdestination=fopen(argv[2],"wb"))==NULL)
    {
        perror("Program can not open destination file.");
        return 2;
    }

    while(!(feof(fpsource)))
    {
        ch=fgetc(fpsource);
        if(ferror(fpsource))
        {
            printf("An error is occurred when taking character  from source file.");
            return 3;
        }

        if(!feof(fpdestination))
            fputc(ch,fpdestination);
        putchar(ch);
        if(ferror(fpdestination))
        {
            printf("An error is occurred when assigning character  from destination file.");
            return 4;
        }
    }

    if((fclose(fpsource))==EOF)
    {
        perror("Program can not close source file");
        return 5;
    }

    if((fclose(fpdestination))==EOF)
    {
        perror("Program can not close destination file");
        return 5;
    }

    return 0;
}
