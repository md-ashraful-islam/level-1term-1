#include<stdio.h>
int dig(char ch)
{
    if(ch>='0' && ch<='9')
        return 1;
    return 0;
}
int main()
{
    char ch;
    printf("enter one charecter\n ");
    ch=getch();
    printf("%d",dig(ch));
    return 0;
}
