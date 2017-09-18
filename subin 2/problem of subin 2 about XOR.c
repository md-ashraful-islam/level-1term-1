#include<stdio.h>
int main()
{
    int n,i,s=0,j;
    printf("Please enter element of array: ");
    scanf("%d",&n);
    int ara[n];
    printf("Please enter array element: ");
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);

//    for(i=0;i<n-1;i++)
//    {
//        for(j=i+1;j<n;j++)
//        {
//            if(ara[i]>ara[j])
//            {
//                ara[i]=ara[i]^ara[j];
//                ara[j]=ara[i]^ara[j];
//                ara[i]=ara[i]^ara[j];
//            }
//        }
//    }
//    for(i=0;i<n;i++)
//        if((ara[i]^i+1)!=0)
//            break;

//    printf("The missing number is %d",i+1);

    for(i=1;i<=n;i++)
        s=s^(ara[i-1]^i);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((s^ara[j])==i)
            {
                printf("The missing number is %d",i);
                return 0;
            }
        }
    }

}
