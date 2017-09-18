#include<stdio.h>

int isMagicSquare(int n,int a[][n])
{
    int i,j;
    int sum=0,temp1=0,temp2=0;
    for(i=0;i<n;i++)
        sum+=a[i][0];

//        printf("%d\n",sum);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            temp1+=a[i][j];
            temp2+=a[j][i];
//            printf("%d %d\n",temp1,temp2);
        }
        if((sum!=temp1)  ||  (sum!=temp2))
            return 0;
        temp1=0;
        temp2=0;
    }
    for(i=0;i<n;i++)
    {
        temp1+=a[i][i];
        temp2+=a[n-i-1][i];
//        printf("%d %d\n",temp1,temp2);
    }
    if((sum!=temp1)  ||  (sum!=temp2))
            return 0;
    return 1;
}

int main()
{
    int a[3][3]={6,1,8,7,5,3,2,9,4};

    if(isMagicSquare(3,a))
        printf("YES\n");
    else
        printf("NO\n");

}
