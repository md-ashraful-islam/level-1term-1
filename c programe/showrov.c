#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    printf("2\t");
    for(i=3; i<=n; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
            printf("%d\t",i);


    }
}
