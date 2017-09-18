#include<stdio.h>

int main()
{
    char ch;
    do{
        ch=getchar();
        if(ch==EOF) return -1;

        if(putchar('.')==EOF) return -2;
    }while(ch!='\n');
    return 0;
}
