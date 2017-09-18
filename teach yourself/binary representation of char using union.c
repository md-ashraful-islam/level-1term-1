#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    union type
    {
        char ch;
        unsigned int b1:1;
        unsigned int b2:1;
        unsigned int b3:1;
        unsigned int b4:1;
        unsigned int b5:1;
        unsigned int b6:1;
        unsigned int b7:1;
        unsigned int b8:1;
    }t;
    printf("size of union: %d\n",sizeof(union type));

    printf("Enter a character: ");
    t.ch=getche();
//
//
//    for(i=0;i<8;i++)
//        printf("%d",t.b[i]);

    printf("\nPrinting bits: \n");
    if(t.b1) printf("1");
    else printf("0");
    if(t.b2) printf("1");
    else printf("0");
    if(t.b3) printf("1");
    else printf("0");
    if(t.b4) printf("1");
    else printf("0");
    if(t.b5) printf("1");
    else printf("0");
    if(t.b6) printf("1");
    else printf("0");
    if(t.b7) printf("1");
    else printf("0");
    if(t.b8) printf("1\n");
    else printf("0\n");

    return 0;
}
