#include<stdio.h>

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n],i,j,k;
    for(i=0;i<m;i++)
    {
        for(k=0;k<n;k++)
            scanf("%d",&a[i][k]);
    }
    j=(m>n)?m:n;
    int t[j][j];


    for(i=0;i<j;i++)
    {
        for(k=0;k<j;k++)
        {
            t[i][k]=a[k][i];
        }
    }

    printf("OUTPUT: \n");

    for(i=0;i<n;i++)
    {
        for(k=0;k<m;k++)
            printf("%d\t",t[i][k]);
        printf("\n");
    }

}
