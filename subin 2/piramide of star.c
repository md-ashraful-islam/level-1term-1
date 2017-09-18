#include<stdio.h>
int n;
int recurse(int count)
{
    if(count>n)
        return 0;
    printf("%d ",count);
    recurse(count+1);
    if(count<n)
    printf("%d ",count);
    return 0;
}
void space(int m)
{
    int i=0;
    for(;i<m;i++)
    {
        printf("  ");
    }
    return 0;
}
int main()
{
    int i;
    printf("Enter the length of pyramide: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        space(n-i);
        recurse(n-i);
        printf("\n");
    }
    return 0;
}
