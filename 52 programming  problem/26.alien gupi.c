#include<stdio.h>
#include<string.h>

int main()
{
    register int i;
    int t,day;
    float x;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%f",&x);
        day=0;
        while(x>=1)
        {
            x/=2;
            day++;
        }
        printf("%d days",day);

        if(i<t-1)
            printf("\n");
    }

    return 0;
}
