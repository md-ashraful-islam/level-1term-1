#include<stdio.h>
int main()
{
    int i,n,temp;
    printf("enter array size: ");
    scanf("%d",&n);
    int ara[n];
    printf("Enter element of array : ");
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);
    temp=ara[0];
    for(i=0;i<n-1;i++)
    {
        ara[i]=ara[i+1];
    }
    ara[n-1]=temp;
    printf("left rotated array is \n");
    for(i=0;i<n;i++)
        printf("%d\t",ara[i]);
    return 0;
}


