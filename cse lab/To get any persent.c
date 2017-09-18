#include<stdio.h>
float per(float n,int i)
{
    if(i==1)
        return n;
    return n+per(n,i-1);
}
int main()
{
    float n;
    int i;
    printf("Enter your number: ");
    scanf("%f",&n);
    for(i=1;i<=100;i++)
        printf("%d Persantage of your number is %.2f\n",i,per(n/100.0,i));
    return 0;
}

