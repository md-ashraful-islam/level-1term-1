#include<stdio.h>

int main()
{
    int m,y,d;
    printf("Please input as format (DD/MM/YYYY): ");
    scanf("%d%d%d",&d,&m,&y);
    if(m<3)
    {
        m+=10;
        y--;
    }
    int h;
    h=d+(26*(m+1))/10+y+y/4+6*(y/100)+y/400;
    h=h%7;

    printf("The day of the week is %d",h);

    return 0;
}
