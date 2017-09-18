#include<stdio.h>

int bitparity(int x)
{
    int s=sizeof(x)*8;

    int i,count=0;
    for(i=0;i<s;i++)
    {
        if((x&(1<<i))==0)
            count++;
    }
    if(count%2)
        return 1;
    return 0;
}

int main()
{
    int x;
    scanf("%d",&x);
    if(bitparity(x))
    {
        printf("Yes");
        return 0;
    }

    printf("No");
    return 0;
}
