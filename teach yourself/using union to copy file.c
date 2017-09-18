#include<stdio.h>

union type{
    int i;
    char ch;
}t;

int main()
{
//    char in[]="text.txt",out[]="text copy by union.txt";
    FILE *in,*out;

    in=fopen("text.txt","r");
    out=fopen("text copy by union.txt","w");
    while(1)
    {
        t.i=fgetc(in);
        if(t.i==EOF)
            break;
        fputc(t.ch,out);
        putchar(t.ch);
    }
    fclose(in);
    fclose(out);

    return 0;
}
