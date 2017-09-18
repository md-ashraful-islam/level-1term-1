#include<stdio.h>
#include<math.h>
int count_digit(int n,int digit)
{
    if(n==0)
        return 0;
    if(n%10==digit)
        return 1+count_digit(n/10,digit);
    return count_digit(n/10,digit);
}
int main()
{
    int n,digit,count;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("Enter your digit: ");
    scanf("%d",&digit);
    count=count_digit(n,digit);
    printf("Your digit is in this number %d times.",count);
    return 0;
}
