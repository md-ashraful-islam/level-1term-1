#include<stdio.h>

int main()
{
    int a[10]={3696,565,56,526,6,565,3696,5,78,53};
    int cnt[10]={0},i,j,max,index=0;
    for(i=0;i<10;i++)
    {
        for(j=i;j<10;j++)
        {
            if(a[i]==a[j])
                cnt[i]++;
        }
    }
    max=cnt[0];
    for(i=0;i<10;i++)
    {
        if(max<cnt[i] || (max==cnt[i] && a[i]>a[index]))
        {
            max=cnt[i];
            index=i;
        }

    }
    printf("MODE: %d",a[index]);

    return 0;
}
