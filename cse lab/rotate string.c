#include<stdio.h>
int main()
{
    int l,i,n;
    printf("Enter string length: ");
    while(1)
    {
        scanf("%d",&l);
        if(l<1)
            printf("!!!Please enter string length CORRECTLY: ");
        else
            break;
    }
    char str[l],t,str1[l+1];
    printf("Please enter your string: ");

    scanf(" %s",&str);

    printf("Please enter number of rotation: ");
    while(1)
    {
        scanf("%d",&n);
        if(n<1)
            printf("!!!Please enter number of rotation CORRECTLY: ");
        else
            break;
    }
    for(i=0;i<l;i++)
    {
            str1[(n+i)%l]=str[i];
    }
    str[l]='\0';
    printf("\nYour rotated string is %s",str1);
    return 0;
}
