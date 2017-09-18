#include<stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
//        (i)

//        for(j=0;j<n;j++)
//        {
//            if(i%2) printf("-");
//            else printf("+");
//            if(j!=n-1) printf(" ");
//        }

//       (ii)

        for(j=0;j<n;j++)
        {
            if(j%2) printf("-");
            else printf("+");
            if(j!=n-1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
