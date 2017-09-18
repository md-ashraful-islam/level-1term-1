#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("Press any key to determine it's ASCII code(q for exit): ");
    do
    {
        ch=getch();
        printf("%d\n",ch);
    }while(ch!='q');
    return 0;
}
