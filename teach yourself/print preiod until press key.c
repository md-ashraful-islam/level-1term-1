#include<stdio.h>
#include<conio.h>

int main()
{
    while(1)
    {
        printf(".");
        if(kbhit())//kbhit is a function that return true if press a key or return false.
        {
            getch();
            break;
        }

    }
    return 0;
}
