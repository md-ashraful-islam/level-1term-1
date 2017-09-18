#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
int menu();
int addition();
int subtraction();
void gotoxy(int x,int y)
{
    COORD a={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
int main()
{
    while(1)
    {
        switch(menu())
        {
            case 1:system("cls");
                addition();
                break;
            case 2:system("cls");
                subtraction();
                break;
            case 3:return 0;
            default :system("cls");
                break;
        }
    }
}
int menu()
{
    int choice;
    gotoxy(12,8); printf("Choose");
    gotoxy(15,9); printf("1for Addition.");
    gotoxy(15,10); printf("2 for Subtraction.");
    gotoxy(15,11); printf("3 for Exit.");
    gotoxy(12,12); printf("Enter your choice: ");
    scanf("%d",&choice);
    return choice;
}
int addition()
{
    int a,b;
    gotoxy(12,7); printf("Addition");
    gotoxy(12,9); printf("Enter first number: ");
    scanf("%d",&a);
    gotoxy(12,10); printf("Enter second number: ");
    scanf("%d",&b);
    gotoxy(12,12); printf("Summation of two number is : %d",a+b);
    getch();
}
int subtraction()
{
    int a,b;
    gotoxy(12,7); printf("Subtraction");
    gotoxy(12,9); printf("Enter first number: ");
    scanf("%d",&a);
    gotoxy(12,10); printf("Enter second number: ");
    scanf("%d",&b);
    gotoxy(12,12); printf("Subtraction result of two number is : %d",a-b);
    getch();
}
