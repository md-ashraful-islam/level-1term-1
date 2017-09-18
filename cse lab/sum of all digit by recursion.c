#include<stdio.h>
int sd(int n)
{
    if(n<10)
        return n;
    return (n%10)+sd(n/10);
}
int main()
{
    int n;
    printf("Enter your number is : ");
    scanf("%d",&n);
    printf("The sum of all digit is %d ",sd(n));
    return 0;
}
