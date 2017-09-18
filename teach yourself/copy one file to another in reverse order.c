#include<stdio.h>

int main()
{
    FILE *in,*out;
    long loc;
    char ch;

    if((in=fopen("text.txt","rb"))==NULL)
    {
        perror("Error in opening input file.");
        return 1;
    }
    if((out=fopen("text copy.txt","wb"))==NULL)
    {
        perror("Error in opening output file.");
        return 1;
    }
    fseek(in,0,SEEK_END);
    loc=ftell(in);

    while(loc)
    {
        fseek(in,loc-1,SEEK_SET);
        if((fread(&ch,sizeof(char),1,in))!=1)
        {
            printf("Error in inputing data.");
            return 5;
        }
        putchar(ch);
        if((fwrite(&ch,sizeof(char),1,out))!=1)
        {
            printf("Error in assigning data.");
            return 5;
        }
        loc--;
    }
    fclose(in);
    fclose(out);

    return 0;
}
