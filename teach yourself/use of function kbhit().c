#include<stdio.h>
#include<conio.h>

int main()
{
    double amount=.2;

    printf("printing 5% tax table\n\r");
    printf("Press any key to stop\n\n\r");
    do
    {
        printf("amount :%lf,tax :%lf\n\r",amount,amount*.05);
        if(kbhit())
            break;
        amount+=.2;
    }while(amount<=100.0);
    getch();
    return 0;
}
