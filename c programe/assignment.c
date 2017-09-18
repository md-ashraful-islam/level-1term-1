#include<stdio.h>
#include<windows.h>
void gotoxy(int x,int y)
{
    COORD xy={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),xy);
}
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int main()
{
    int choice,i,n,n1,n2,s;
    gotoxy(30,8);
    printf("choose");
    gotoxy(30,9);
    printf("1 for addition");
    gotoxy(30,10);
    printf("2 for subtraction");
    gotoxy(30,11);
    printf("3 for exit");
    gotoxy(30,12);
    printf("Enter your choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
        gotoxy(30,13);
        printf("enter exicuting number:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            gotoxy(30,13+i+i);
            scanf("%d%d",&n1,&n2);
            s=add(n1,n2);
            gotoxy(30,14+i+i);
            printf("%d",s);
        }
        return 0;
    }
    if(choice==2)
    {
        gotoxy(30,13);
        printf("enter exicuting number:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            gotoxy(30,13+i);
            scanf("%d%d",&n1,&n2);
            s=sub(n1,n2);
            gotoxy(30,14+i);
            printf("%d",s);
        }
        return 0;
    }
    if(choice==3)
    {
        return 0;
    }
}
