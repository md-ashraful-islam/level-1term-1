#include<stdio.h>

int isSparse(int x)
{
    int i,size=sizeof(x)*8;

    for(i=0;i<size-1;i++)
    {
        if(((x>>i) & 1))
        {
            if(((x>>(i+1)) & 1))
                return 0;
        }
    }
    return 1;
}

int main()
{
    int x;
    scanf("%d",&x);
    if(isSparse(x))
        printf("YES\n");
    else
        printf("NO\n");

    int i;
    for(i=0;;i++)
        if(isSparse(x+i))
            break;

    printf("The smallest sparse is %d",x+i);
    return 0;
}
