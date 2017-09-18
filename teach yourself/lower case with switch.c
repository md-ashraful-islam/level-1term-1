#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    printf("Enter a character: ");
//    printf("%d",'a');
    ch=getche();
    switch(ch/32)
        case 2:ch=ch+32;
    printf("\n%c",ch);
    return 0;
}
