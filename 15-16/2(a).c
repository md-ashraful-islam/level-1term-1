#include<stdio.h>

void removes(int a[],int v,int n)
{
    int i,j;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==v)
        {
            for(j=i;j<n-1;j++)
                a[j]=a[j+1];
            a[n-1]=0;
            break;
        }
    }

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}

int main()
{
    int a[10]={454,4,5,87,4,5,45,545,4,5};
    removes(a,4,10);
    return 0;
}
