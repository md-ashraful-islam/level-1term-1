#include<stdio.h>
int main()
{
    #define swap(t,a,b) do{t=a;a=b;b=t;}while(0)
//    do while loop is must because when we call a macro a extra
//    semi colon is go to the end of the statement.if we use a if-else
//    statement then the semicolon is occuring a problem so in thie
//     case we have to use do-while loop.
    int t,a,b;
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    if(a<b)
        swap(t,a,b);
    printf("\nThe largest number is %d\nThe smallest number is %d",a,b);
    return 0;
}
