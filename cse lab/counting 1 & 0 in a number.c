#include<stdio.h>
#include<limits.h>
int main()
{
    int n,s=sizeof(n)*CHAR_BIT,i,count=0;
    printf("please enter a number: ");
    scanf("%d",&n);
    for(i=0;i<s;i++)
        if(((n>>i)&1)==1)
            count++;
    printf("In your number count of 1 is:\t%d\tand count of 0 is:\t%d ",count,s-count);
    return 0;
}
