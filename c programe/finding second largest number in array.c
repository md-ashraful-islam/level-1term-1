#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter your number: " );
    scanf("%d",&n);
    int ara[n];
    printf("\nEnter array element: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int max1,max2;
    if(ara[0]>ara[1])
    {
        max1=ara[0];
        max2=ara[1];
    }
    else
    {
        max2=ara[0];
        max1=ara[1];
    }
    for(i=2;i<n;i++)
    {
        if(ara[i]>max1)
        {
            max2=max1;
            max1=ara[i];
        }
        else if(ara[i]>max2)
        {
            max2=ara[i];
        }
    }
    printf("\n\n1st maximum is %d",max1);
    printf("\n2nd maximum is %d",max2);
    return 0;
}
