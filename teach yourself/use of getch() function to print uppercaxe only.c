#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
    char ch;
    printf("Enter charecter (q or Q to exit): ");
    do
    {
        ch=getch();
        ch&=(~32);
        printf("%c",ch);
    }while(ch!='Q');
    return 0;
}
