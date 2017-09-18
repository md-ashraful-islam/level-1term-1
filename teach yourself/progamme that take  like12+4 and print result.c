#include<stdio.h>

int main()
{
    int n1,n2;
    char ch;

    printf("Enter your expression: ");
    scanf("%d %c%d",&n1,&ch,&n2);
//    if we write this as %d%c%d then scanf donot permit a space
//    we are not sure that user will not input space in this reason
//    i take a space for which scanf take a space but donot assign
//    any variable..

    switch(ch)
    {
        case '+':printf("sum=%d",n1+n2);
            break;
        case '-':printf("sub=%d",n1-n2);
            break;
        case '*':printf("mul=%d",n1*n2);
            break;
        case '/':printf("div=%f",((float)n1/n2));
            break;
        default:printf("Please enter expression correctly.");
    }
    return 0;
}
