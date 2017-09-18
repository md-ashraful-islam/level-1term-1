#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fpin,*fpout;
    char *input_file="beautiful-wallpaper-download-14.JPG";
    char *output_file="output image.txt";
    int ch;

    fpin=fopen(input_file,"rb");
    if(fpin==NULL)
    {
        perror("File opening failed.");
        return EXIT_FAILURE;
    }

    fpout=fopen(output_file,"wb");

    while(1)
    {
        ch=fgetc(fpin);
        if(ch==EOF)
        {
            break;
        }
        fputc(ch,fpout);
    }

    fclose(fpin);
    fclose(fpout);

    return 0;
}
