#include<stdio.h>

int bitParity(int x)
{
    int i,count=0,size=sizeof(x)*8;
    for(i=0;i<size;i++)
    {
        if(((x>>i) & 1)==0)
            count++;
    }

    return ((count%2)?1:0);
}

int main()
{
    int x;
    scanf("%d",&x);
    if(bitParity(x))
        printf("YES");
    else
        printf("NO");

    return 0;
}
