#include<stdio.h>
int ara[100];
void sortarray(int ara[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n;j++)
        {
            if(ara[i]>ara[j])
            {
                temp=ara[j];
                ara[j]=ara[i];
                ara[i]=temp;
            }
        }
    }

}
int main()
{
    int i,n;
    printf("enter array size: ");
    scanf("%d",&n);
    printf("Enter element of array : ");
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);
    int distinct=n;
    for(i=0;i<n-1;i++)
    {
        if(ara[i]==ara[i+1])
            distinct--;
    }
    printf("The number of distinct element is %d",distinct);
    return 0;
}
