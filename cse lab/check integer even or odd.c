#include<stdio.h>
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    int m=sizeof(n)*8-1;
    if(((n<<m)>>m)==0)
        printf("EVEN");
    else
        printf("ODD");

    return 0;
}
