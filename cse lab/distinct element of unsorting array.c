#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter array size : ");
    scanf("%d",&n);
    int ara[n];
    printf("Enter element of array : ");
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);
    int distinct=n;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ara[i]==ara[j])
            {
                distict--;
                break;
            }
        }
    }
    printf("The number of distinct element is %d",distinct);
    return 0;
}
