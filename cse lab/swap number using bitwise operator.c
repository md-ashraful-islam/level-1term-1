#include<stdio.h>
int main()
{
    int a,b;
    printf("please enter two number: ");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;      //b=(a^b)^b=a
    a=a^b;      //a=(a^b)^a=b
    printf("Your number is %d & %d",a,b);
    return 0;
}
