#include<stdio.h>

int main()
{
    char *p,str[100];
    printf("Enter a string: ");
    p=gets(str);
    if(p)
        printf("Your entered the string %s or %s",p,str);
    return 0;
}
//gets function return 1st address of string if it successful
//and return null pointer if one error is occurred.
