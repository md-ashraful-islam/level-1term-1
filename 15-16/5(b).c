#include<stdio.h>

int getMinArray(int a[],int m,int n,int h)
{
    int i,min=a[0];
    for(i=0;i<(m*n*h);i++)
    {
        if(min>a[i])
            min=a[i];
    }
    return min;
}

int main()
{
    int c=5,b=6;
    c=(b%2)?5:10;
    if(b%2==0)
    printf("The if statement is executing. %d",c);
    int a[2][3][2]={1,2,3,4,3,6,0,5,-5,45,55,44};
    printf("MIN: %d",getMinArray(a,2,3,2));
    return 0;
}
