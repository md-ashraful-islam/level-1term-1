#include<stdio.h>
int main()
{
    int n,i,s=0,j,n1=0,n2=0;
    printf("Please enter element of array: ");
    scanf("%d",&n);
    int ara[n];
    printf("Please enter array element: ");
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ara[i]>ara[j])
            {
                ara[i]=ara[i]^ara[j];
                ara[j]=ara[i]^ara[j];
                ara[i]=ara[i]^ara[j];
            }
        }
    }
    for(i=0;i<n;i++)
        if((ara[i]^i+1)!=0)
        {
            if(!n1)
                n1=i+1;
            else
                n2=i+1;
        }
    printf("The missing number are %d and %d",n1,n2);
    return 0;
}
