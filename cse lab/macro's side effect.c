#include<stdio.h>
int main()
{
    #define max(a,b) ((a>b)?a:b)
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    max(a,b);
    printf("The two number are in Descending %d %d\n",a,b);
    max(a++,b++);
    printf("The two number are in Descending %d %d",a,b);
    //here macro replace max(a++,b++); as  ((a++>b++)?a++:b++)
    // so there is double increment for a.in this case macro is not right approach.
    return 0;
}
