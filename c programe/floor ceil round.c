#include<stdio.h>
int main()
{
    int f,c,r;
    float n;
    printf("please enter your number:");
    scanf("%f",&n);
    f=(int) n;
    r=(int) (n+.5);
    if(f==n)
    {
        c=f;
    }
    else{
        c=f+1;
    }
    printf("floor: %d\nceil: %d\nround: %d",f,c,r);
    return 0;
}
