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
    printf("Enter your number: ");
    scanf("%f",&n);
    printf("Persantage of your number is %f",per(n,100));
    return 0;
}
