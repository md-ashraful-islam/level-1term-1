#include<stdio.h>
#include<stdlib.h>

char upcase(char ch)
{
    switch((ch-1)/32)
    {
        case 3:ch-=32;
        break;
    }

    return ch;
}

int main()
{
    char ch;
    printf("Enter a character: ");
    ch=getche();
    ch=upcase(ch);
    printf("\nYour character is %c ",ch);
    return 0;
}
