#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}

int main()
{
    int length,i,sum=0,tmp;

    printf("Enter number of integer: ");
    scanf("%d",&length);

    for(i=0;i<length;i++)
    {
        printf("Enter Number %d: ",i+1);
        scanf("%d",&tmp);
        printf("Number %d: %d\n",i+1,tmp);
        sum=add(sum,tmp);
        printf("summation %d\n",sum);
    }

    printf("The average is %lf\n",(double)sum/length);

    return 0;
}
