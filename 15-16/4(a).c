#include<stdio.h>

int checkintheseries(int x)
{
    int i,temp;
    for(i=0;;i++)
    {
        if(i==0)
            temp=1;
        else
        {
            temp=i+i*temp;
        }
        if(temp==x)
            return 1;
        else if(temp>x)
            return 0;
    }

}


int main()
{
    int x;
    scanf("%d",&x);
    if(checkintheseries(x))
        printf("YES\n");
    else
        printf("NO\n");
}

