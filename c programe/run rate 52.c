#include<stdio.h>
int main()
{
    int r1,r2,b,t,i;
    float rr1,rr2;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&r1,&r2,&b);
        rr1=(r2/(300.0-b))*6;
        rr2=((r1+1.0-r2)/b)*6;
        printf("%.2f %.2f\n",rr1,rr2);
    }
    return 0;
}
