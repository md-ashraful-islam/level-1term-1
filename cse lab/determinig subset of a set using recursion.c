#include<stdio.h>
void subset(int ara[],int x,int ara2[])
{
    static int j;
    static int i=0;
    if(x==1)
    {
        for(j=0;j<2;j++)
            {
                ara
            }
    }
}
int main()
{
    int n,x,i,j,m,k;
    printf("Enter length of Array: ");
    do{
        scanf("%d",&n);
        if(n<1)
            printf("\nEnter Length of Array CORRECTLY: ");
    }while(n<1);

    int ara[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %dth element of Array: ",i+1);
        scanf("%d",&ara[n]);
    }
    x=n;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ara[i]==ara[j])
            {
                x--;
                break;
            }
        }
    }
    int ara2[pow(2,x)];
    return 0;
}
