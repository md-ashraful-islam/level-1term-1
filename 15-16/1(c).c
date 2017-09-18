#include<stdio.h>

char lwrcase(char ch)
{
    switch(ch/32)
    {
        case 'A'/32:ch+=32;
        break;
    }
    return ch;
}

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    ch=lwrcase(ch);
    printf("\n%c",ch);

    return 0;
}
