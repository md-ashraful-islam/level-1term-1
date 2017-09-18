#include<stdio.h>

int n,count=0;

void hanoi(int n,int s,int h,int d)
{
    if(n==1)
    {
        printf("Move disk from %d to %d\n",s,d);
        count++;
        return;
    }
    hanoi(n-1,s,d,h);
    printf("Move disk from %d to %d\n",s,d);
    count++;
    hanoi(n-1,h,s,d);
}
int main()
{
    printf("Please enter disk number: ");
    scanf("%d",&n);
    hanoi(n,1,2,3);
    printf("Movement number is %d",count);
    return 0;
}
