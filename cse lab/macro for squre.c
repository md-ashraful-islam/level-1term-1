#include<stdio.h>
int main()
{
    #define square(p) (p)*(p)  //brasses is must..
    int n;
    float m;
    printf("Enter your integer number: ");
    scanf("%d",&n);
    printf("Enter your float number: ");
    scanf("%f",&m);
    printf("Square of your integer number is %d\n",square(n));
    printf("Square of your float number is %f\n",square(m));
    //macro can perform with various data types.

    return 0;
}
