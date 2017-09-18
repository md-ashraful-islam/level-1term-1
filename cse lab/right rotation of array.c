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
    temp=ara[n-1];
    for(i=n-1;i>0;i--)
    {
        ara[i]=ara[i-1];
    }
    ara[0]=temp;
    printf("left rotated array is \n");
    for(i=0;i<n;i++)
        printf("%d\t",ara[i]);
    return 0;
}

