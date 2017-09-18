#include<stdio.h>

int main()
{
    int a[10]={5,6,6,6,5,6,5,5,5,5};
    int cnt=10,i,j;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]==a[j])
            {
                cnt--;
                break;
            }

        }
    }
    printf("The distict element are %d",cnt);
    return 0;
}
