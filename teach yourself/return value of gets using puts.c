#include<stdio.h>

int main()
{
    char *p,str[100];
    puts("Enter a string: ");
    p=gets(str);
    if(p)
    {
        puts("Your entered the string ");
        puts(str);
        puts("or");
        puts(p);
    }
    return 0;
}
//gets function return 1st address of string if it successful
//and return null pointer if one error is occurred.
