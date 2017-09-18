#include<stdio.h>

double diagonalsSum(int n,double a[n][n])
{
    int i,j;
    double sum=0;
    for(i=0;i<n;i++)
    {
        sum+=*(*(a+i)+i);
    }
    for(i=0;i<n;i++)
    {
        sum+=*(*(a+(n-i-1))+i);
    }
    return sum;
}

int main()
{
    int i,j,n;
    double sum;
    printf("Enter the dimension of the Square matrix: ");
    scanf("%d",&n);
    double a[n][n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element of row %d: ",i+1);
        for(j=0;j<n;j++)
            scanf("%lf",&a[i][j]);
        printf("\n");
    }

    sum=diagonalsSum(n,a);

    printf("\nResult is : %.2lf",sum);

    return 0;
}
